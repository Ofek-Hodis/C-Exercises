#include <stdio.h>
#include <stdlib.h>

int exo3(const int (*t)[3], const int rows, const int colones)
{
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<colones; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}

int exo4(const int (*t)[3], const int rows, const int colones)
{
    int sum=0;
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<colones; j++)
        {
            sum += t[i][j];
        }
    }
    printf("%d \n", sum);
}

int diagonal_sum(const int (*t)[3], const int size_2d) // The same amount of lines and colones
{
    int sum=0;
    for (int i=0; i<size_2d; i++)
    {
        sum += t[i][i];
    }
    printf("%d \n", sum);
}

int anti_diagonal_sum(const int (*t)[3], const int size_2d) // The same amount of lines and colones
{
    int sum=0;
    for (int i=0; i<size_2d; i++)
    {
        sum += t[i][size_2d-i-1];
    }
    printf("%d \n", sum);
}

int line_sum(const int rows, const int colons, const int t[rows][colons], const int l)
{
    int sum=0;
    for (int i=0; i<colons; i++)
    {
        sum += t[l][i];
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
            int t[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
            diagonal_sum(t, 3);
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

}
    return 0;
}
