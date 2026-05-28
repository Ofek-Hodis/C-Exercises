#include "article.h"

#ifndef _TAB_ARTICLES_H_
#define _TAB_ARTICLES_H_

ARTICLE **create_array_of_articles(int nb);
void fill_array_of_articles(ARTICLE **arr, int nb);
void display_array_of_articles(ARTICLE **arr, int nb);
void destroy_array_of_articles(ARTICLE ***arr, int nb);

#endif
