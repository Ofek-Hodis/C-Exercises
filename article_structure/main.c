#include <stdio.h>
#include <stdlib.h>
#include "tab-articles.h"

ARTICLE* search_by_code(ARTICLE** arr, int nb, int code)
{
  for (int i=0; i<nb; i++)
  {
    if (arr[i]->code == code)
      return arr[i];
  }
  return NULL;
}

double valeur_stock(ARTICLE** arr, int nb)
{
  double somme=0;
  for (int i=0; i<nb; i++)
  {
    somme += arr[i]->prix * arr[i]->qteStock;
  }
  return somme;
}

ARTICLE* article_plus_cher(ARTICLE **arr, int nb)
{
  ARTICLE * max = *arr;
  for (int i=0; i<nb; i++)
  {
    if (arr[i]->prix > max->prix)
    {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  int n = 3;
  ARTICLE **mag;
  mag = create_array_of_articles(n);
  fill_array_of_articles(mag, n);
  display_array_of_articles(mag,n);
  destroy_array_of_articles(&mag, n);

  return 0;
}
