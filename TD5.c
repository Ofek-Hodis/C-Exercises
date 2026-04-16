#include <stdio.h>
#include <stdlib.h>

void allocate_table(int **t, int lines, int rows)
{

}

void exo3(const int (*t)[3], const int rows, const int columns)
{
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}

void exo4(const int (*t)[3], const int rows, const int columns)
{
    int sum=0;
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            sum += t[i][j];
        }
    }
    printf("%d \n", sum);
}

void diagonal_sum(const int * const *t, const int size_2d) // The same amount of lines and colones
{
    int sum=0;
    for (int i=0; i<size_2d; i++)
    {
        sum += t[i][i];
    }
    printf("%d \n", sum);
}

void anti_diagonal_sum(const int (*t)[3], const int size_2d) // The same amount of lines and colones
{
    int sum=0;
    for (int i=0; i<size_2d; i++)
    {
        sum += t[i][size_2d-i-1];
    }
    printf("%d \n", sum);
}

void line_sum(const int rows, const int columns, const int t[rows][columns], const int l) // exercise 7
{
    int sum=0;
    for (int i=0; i<columns; i++)
    {
        sum += t[l][i];
    }
    printf("%d \n", sum);
}

void column_sum(const int rows, const int columns, const int t[rows][columns], const int c) // exercise 7
{
    int sum=0;
    for (int i=0; i<rows; i++)
    {
        sum += t[i][c];
    }
    printf("%d \n", sum);
}

int main()
{
    int choice;
    do {
        printf("choose exercise number : \n");
        scanf("%d", &choice);
    } while (choice < 0);

    switch (choice) {
    case 3 :
        {
            int t[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
            exo3(t, 3, 3);
            break;
        }
    case 4 :
        {
            int t[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
            exo4(t, 3, 3);
            break;
        }

    case 5 :
        {
            int size_2d;
            printf("Enter the number of rows and columns in your table");
            scanf("%d", &size_2d);
            int **t = malloc(size_2d*sizeof(int *)); // Allocating for pointers, sizeof(int *)
            if (t == NULL) return 1; // Checking for allocation failure
            for (int i=0; i<size_2d; i++)
            {
                t[i] = malloc(size_2d*sizeof(int));
                if (t[i] == NULL)
                {
                    for (int j=i; j>=0; j--)
                    {
                        free(t[j]);
                    }
                    free(t);
                    return 1; // Checking for allocation failure
                }
            }
            for (int i=0; i<size_2d; i++)
            {
                for (int j=0; j<size_2d; j++)
                {
                    t[i][j] = i+j;
                }
            }
            diagonal_sum(t, size_2d);
            for (int i=0; i<size_2d; i++)
            {
                free(t[i]);
            }
            free(t);
            break;
        }
    case 6 :
        {
            int t[3][3] = {{1,2,3}, {4,5,6}, {29,8,9}};
            anti_diagonal_sum(t, 3);
            break;
        }
    case 7 :
        {
            int t[3][3] = {{1,2,3}, {4,5,6}, {29,8,9}};
            line_sum(3, 3, t, 1);
            break;
        }
        default : break;
    case 8 :
        {
            int t[3][3] = {{1,2,3}, {4,5,6}, {29,8,9}};
            column_sum(3, 3, t, 2);
            break;
        }
}
    return 0;
}

