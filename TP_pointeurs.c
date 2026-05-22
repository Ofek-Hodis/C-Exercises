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

void create_array(int **A, const int SIZE)
{
    *A = malloc(SIZE*sizeof(int));
}

void fill_array(int *A, const int SIZE)
{
    for (int i=0; i<SIZE; i++)
    {
        printf("Enter the value at index %d", i);
        scanf("%d",A+i);
    }
}

void display_array(int *A, const int SIZE)
{
    for (int i=0; i<SIZE; i++)
    {
        printf("The value in index %d is %d", i, *(A+i));
    }
}

void destroy_array(int **A, const int SIZE)
{
    free(A);
    A=NULL;
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
    case 6:
        {
            int **A = NULL;
            const int SIZE = 5;
            
        }
    default : break;
    }
    return 0;
}