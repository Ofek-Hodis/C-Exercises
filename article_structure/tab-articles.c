#include <stdlib.h>
#include "article.h"
#include "tab-articles.h"

ARTICLE **create_array_of_articles(int nb) {
  ARTICLE **tab = NULL;
  tab = malloc(sizeof(ARTICLE *) * nb);
  if(tab == NULL) {return NULL;}
  for (int i = 0; i < nb; i++) {
    *(tab+i) = create_article();
  }
  return tab;
}

void fill_array_of_articles(ARTICLE **arr, int nb) {
  for (int i = 0; i < nb; i++) {
    fill_article(arr[i]);
  }
}

void display_array_of_articles(ARTICLE **arr, int nb) {
  for (int i = 0; i < nb; i++) {
    display_article(arr[i]);
  }
}

void destroy_array_of_articles(ARTICLE ***arr, int nb) {
  for (int i = 0; i < nb; i++) {
    destroy_article((*arr)+i);
  }
  free(*arr);
  *arr = NULL;
}
