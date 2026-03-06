//
// Created by ofkho on 06/03/2026.
//

#include <stdio.h>


int main() {
    /*
    // TD 1 Exercice 9
    int length, width, circumference;
    do {
        printf("Enter length and then width (must be positive): ");
        scanf("%d %d", &length, &width);
    } while (!(length > 0 && width > 0));

    circumference = length*2 + width*2;
    printf("The circumference needed is %d \n", circumference);
    return 0;

     */

    /*
    // TD 1 Exercice 10

    int hat, coat, pants, res;
    do {
        printf("Enter number of hats: ");
        scanf("%d", &hat);
        printf("Enter number of coats: ");
        scanf("%d", &coat);
        printf("Enter number of pants: ");
        scanf("%d", &pants);
    } while (hat<=0 || coat<=0 || pants <= 0);

    res = hat*coat*pants;
    printf("The number of possible combinations is %d \n", res);
    return 0;
     */


    // TD 1 Exercice 11:
    int a,b, temp;
    do {
        printf("Enter number of presents in bag 1: ");
        scanf("%d", &a);
        printf("Enter number of presents in bag 2: ");
        scanf("%d", &b);
    } while (a < 0 || b < 0);

    printf("%d %d \n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
    return 0;

}
