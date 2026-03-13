#include <stdio.h>

// void algo16()
// {
//     int i;
//     int n;
//     int x;
//     int somme;
//
//     printf("Entrez le nombre de valiers: ");
//     scanf("%d", &n);
//
//     somme = 0;
//
//     for (i=1; i<=n; i++)
//     {
//         printf("Entrez une valeur: ");
//         scanf("%d", &x);
//         somme = somme + x;
//     }
//
//     printf("La somme des %d valeurs est : %d \n", n, somme);
// }
//
// int main()
// {
//     algo16();
//     return 0;
// }



int main(void)
{
    int exo;
    printf("Exercise number");
    scanf("%d", &exo);
    int buffer_test;
    // Emptying the buffer to prevent input issues with chars
    while((buffer_test = getchar()) != '\n' && buffer_test != EOF){}
    switch (exo)
    {
    case 1:
        {
            int a, b, c, sum;
            printf("Enter three values for a sum separated by comas\n");
            scanf("%d, %d, %d", &a, &b, &c);
            sum = a + b + c;
            printf("La somme des 3 valeurs est %d", sum);
            return 0;
        }
    case 2:
        {
            int a, b, res;
            char operator;
            printf("Enter a value, an operator, and another value \n");
            scanf("%d %c %d", &a, &operator, &b);
            switch (operator)
            {
            case '+':
                {
                    res = a+b;
                    break;
                }
            case '-':
                {
                    res = a-b;
                    break;
                }
            case '/':
                {
                    res = a/b;
                    break;
                }
            case '*':
                {
                    res = a*b;
                    break;
                }
            default:
                {
                    printf("invalid operator input");
                    return 0;
                }
            }
            printf("%d %c %d = %d \n", a, operator, b, res);
            return 0;
        }
    case 3:
    {
            int hours = 0;
            int minutes = 0;
            int seconds = 0;
            printf("Enter the hour in the following format : HH:MM:SS");
            scanf("%d:%d:%d", &hours, &minutes, &seconds);
            printf("%02d:%02d:%02d", hours, minutes, seconds);
            return 0;
    }
    case 4:
        {
            const float PI = 3.14;
            float radius, perimeter, surface, diameter;
            printf("Enter the radius of a circle");
            scanf("%f", &radius);
            perimeter = 2 * PI * radius;
            surface = PI*PI*radius;
            diameter = radius*2;
            printf("The perimeter is %f\n"
                   "The surface is %f\n"
                   "The diameter is %f\n", perimeter, surface, diameter);
            return 0;
        }
    case 5:
        {
            const float TVA = 5.5;
            float price_ht, price_ttc;
            printf("Enter your full price: ");
            scanf("%f", &price_ttc);
            price_ht = price_ttc/(1+(TVA/100));
            printf("The final price without tax is %f Euros", price_ht);
            return 0;
        }
    case 6:
        {
            int x=5, y=17, z=31;
            z = x*y;
            z += y;
            y += 7;
            printf("x=%d; y=%d; z=%d", x, y, z);
            return 0;
        }
    case 7:
        {
            float const R1 = 2.34, R2 = 4.52;
            int n, m;
            float average;
            printf("Enter the first value");
            scanf("%d", n);
            printf("Enter the second value");
            scanf("%d", m);
            average = (n*R1 + m*R2)/(n+m);
            printf("The average is %f", average);
            return 0;
        }
    default:
        {
            printf("Default case");
        }
    }
}


