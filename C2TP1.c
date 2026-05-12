#include <stdio.h>
#define SIZE 10

void saisir_tableau(int t[], const int size)
{
    for (int i=0; i<size; i++)
    {
        printf("Enter the value in index %d \n", i);
        scanf("%d", t+i);
    }
}

void afficher_tableau(int t[], const int size)
{
    for (int i=0; i<size; i++)
    {
        printf("%d ", t[i]);
    }
    printf("\n");
}

int somme_tableau(int t[], const int size)
{
    int somme =0;
    for (int i=0; i<size; i++)
    {
        somme += t[i];
    }
    return somme;
}


double moyenne_tableau(int t[], const int size)
{
    double somme = 0;
    for (int i=0; i<size; i++)
    {
        somme += t[i];
    }
    return somme/size;
}

int min_tableau(int t[], const int size)
{
    int min =0;
    for (int i=0; i<size; i++)
    {
        if (t[i] < t[min])
            min = i;
    }
    return t[min];
}

int max_tableau(int t[], const int size)
{
    int max =0;
    for (int i=0; i<size; i++)
    {
        if (t[i] > t[max])
            max = i;
    }
    return t[max];
}

void inverse_array(int t[], const int n)
{
    int temp;
    for (int i=0; i<n/2; i++)
    {
        temp = t[i];
        t[i] = t[n-1-i];
        t[n-1-i] = temp;
    }
}

int does_contain(int t[], const int N, const int value)
{
    for (int i=0; i<N; i++)
    {
        if (t[i] == value)
            return 1;
    }
    return 0;
}

int remove_doubles(int src[], const int N, int dest[])
{
    int counter = 0;
    for (int i=0; i<N; i++)
    {
        if (does_contain(dest, counter, src[i]))
            continue;
        dest[counter] = src[i];
        counter++;
    }
    return counter;
}

void bubble_sort(int t[], const int N)
{
    int temp=0;
    for (int i = N-1; i >=0; i--)
    {
        int is_changed=0;
        for (int j=0; j<i; j++)
        {
            if (t[j]>t[j+1])
            {
                temp = t[j+1];
                t[j+1] = t[j];
                t[j] = temp;
                is_changed = 1;
            }
        }
        if (!is_changed)
            return;
    }
}

void selection_sort(int t[], const int N)
{
    int temp = 0;
    int count = 0;
    for (int i=0; i<N; i++)
    {
        int index_min=i;
        for (int j=N-1; j>=i; j--)
        {
            if (t[j] < t[index_min])
                index_min = j;
        }
        if (index_min != i)
        {
            temp = t[index_min];
            t[index_min] = t[i];
            t[i] = temp;
            count++;
        }
    }
}

void insertion_sort(int t[], const int N)
{
    for (int i=0; i<N; i++)
    {
        for (int j=i; j>0; j--)
        {

        }
    }
}

void saisir_matrice(const int ROWS, const int COLUMNS, int t[ROWS][COLUMNS])
{
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j < COLUMNS; j++)
        {
            printf("Enter the value in index [%d][%d] \n", i, j);
            scanf("%d", &t[i][j]);
        }
    }
}

void afficher_matrice(const int ROWS, const int COLUMNS, int t[ROWS][COLUMNS])
{
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j<COLUMNS; j++)
        {
            printf("%d  ", t[i][j]);
        }
        printf("\n");
    }
}

void sum_matrices(const int ROWS, const int COLUMNS, int A[ROWS][COLUMNS], int B[ROWS][COLUMNS], int C[ROWS][COLUMNS])
{
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j<COLUMNS; j++)
        {
            C[i][j] = A[i][j]+B[i][j];
        }
    }
}

void transposed_matrix(const int ROWS, const int COLUMNS, int A[ROWS][COLUMNS], int T[COLUMNS][ROWS])
{
    for (int i=0; i<ROWS; i++)
    {
        for (int j=0; j<COLUMNS; j++)
        {
            T[j][i] = A[j][i];
        }
    }
}

int main()
{
    //int t[] = {4, 7, 1, 9, 3, 8, 2, 5, 6, 0};
    //printf("%d \n", somme_tableau(t, SIZE));
    //printf("%lf \n", moyenne_tableau(t, SIZE));
    //printf("%d \n", min_tableau(t,SIZE));

    //afficher_tableau(t, SIZE);
    //inverse_array(t, SIZE);
    //afficher_tableau(t, SIZE);

    // Exercise 5
    //int src[] = {1,2,2,3,4,4,4,5};
    //const int size_src = 8;
    //int dest[8];
    //const int size_dest = remove_doubles(src, size_src, dest);
    //printf("%d \n", size_dest);
    //afficher_tableau(dest, size_dest);

    // Exercise 6 testing - buble sort
    // int t[] = {4, 7, 1, 9, 3, 8, 2, 5, 6, 0};
    // bubble_sort(t, SIZE);
    // afficher_tableau(t, SIZE);

    // Exercise 7 testing - selection sort
    //int t[] = {4, 7, 1, 9, 3, 8, 2, 5, 6, 0};
    //bubble_sort(t, SIZE);
    //afficher_tableau(t, SIZE);

    //Exercise 8 testing - insertion sort

    // Test of input and print matrix
    // const int ROWS = 3;
    // const int COLUMNS = 4;
    // int t[ROWS][COLUMNS];
    // saisir_matrice(ROWS, COLUMNS, t);
    // afficher_matrice(ROWS, COLUMNS, t);

    // //Exercise 12a test - sum of two matrices
    // int A[3][4] = {1,1,1,1,1,1,1,1,1,1,1,1};
    // int B[3][4] = {2,2,2,2,2,2,2,2,2,2,2,2};
    // int C[3][4];
    // sum_matrices(3,4,A,B,C);
    // afficher_matrice(3,4, C);

    // Exercise 12b test - transposed matrix
    int A[3][2] = {1,2,3,4,5,6};
    int T[2][3];
    transposed_matrix(3,2,A, T);
    afficher_matrice(2,3,T);


}