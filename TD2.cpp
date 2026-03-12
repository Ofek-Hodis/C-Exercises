//
// Created by ofkho on 06/03/2026.
//

#include <stdio.h>

int main() {
    int val = 0;
    do {
        scanf("%d", &val);
    } while (val % 3 != 0 || val <= 3);
    printf("%d\n", val);
    return 0;
}



