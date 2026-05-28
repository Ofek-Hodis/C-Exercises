#include <stdio.h>
#include <stdlib.h>
#include "article.h"

ARTICLE *create_article(void) {
  ARTICLE *art = malloc(sizeof(ARTICLE));
  if(art == NULL){ return NULL;}
  return art;
}

void fill_article(ARTICLE *a) {
  printf("Libelle : ");
  scanf("%s", a->libelle);
  printf("Code : ");
  scanf("%d", &a->code);
  printf("Prix : ");
  scanf("%lf", &a->prix);
  printf("Qte : ");
  scanf("%d", &a->qteStock);
}

void display_article(ARTICLE *a) {
  printf("Libelle : %s\n", a->libelle);
  printf("Code : %d\n", a->code);
  printf("Prix : %.2lf\n", a->prix);
  printf("Qte : %d\n", a->qteStock);
}

void destroy_article(ARTICLE **a) {
  if(*a == NULL) {return;}
  free(*a);
  *a = NULL;
}
