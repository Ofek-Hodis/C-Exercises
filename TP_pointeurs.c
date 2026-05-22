#include <stdlib.h>
#include <stdio.h>

void exercise5()
{

    int *p_entier = malloc(sizeof(int));
    printf("Enter a table size");
    scanf("%d", p_entier);
    printf("The number you entered is %d\n", *p_entier);

    int *array = malloc(*p_entier * sizeof(int));
    if (array != NULL)
    {
        for (int i=0; i<*p_entier; i++)
        {
            *(array+i) = i;
        }
        for (int i=0; i<*p_entier; i++)
        {
            printf("%d\n", *(array+i));
        }
    }
    free(array);
    free(p_entier);
}

int main()
{
    printf("Enter exercise number");
    int exercise;
    scanf("%d", &exercise);
    switch (exercise)
    {
    case 5 :
        {
            exercise5();
            break;
        }
    default : break;
    }
    return 0;
}