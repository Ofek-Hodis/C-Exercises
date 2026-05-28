#ifndef _ARTICLE_H_
#define _ARTICLE_H_

typedef struct {
  char libelle[32];
  int code;
  double prix;
  int qteStock;
} ARTICLE;

ARTICLE *create_article(void);
void fill_article(ARTICLE *a);
void display_article(ARTICLE *a);
void destroy_article(ARTICLE **a);

#endif
