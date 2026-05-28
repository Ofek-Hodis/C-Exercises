#include <stdio.h>
#include <stdlib.h>
#include "tab-articles.h"

int main() {
  int n = 3;
  ARTICLE **mag;
  mag = create_array_of_articles(n);
  fill_array_of_articles(mag, n);
  display_array_of_articles(mag,n);
  destroy_array_of_articles(&mag, n);

  return 0;
}
