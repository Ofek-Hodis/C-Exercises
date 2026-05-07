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
        printf("%d, ", t[i]);
    }
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

int main()
{
    int t[] = {4, 7, 1, 9, 3, 8, 2, 5, 6, 0};
    printf("%d \n", somme_tableau(t, SIZE));
    printf("%lf \n", moyenne_tableau(t, SIZE));
    printf("%d \n", min_tableau(t,SIZE));
    printf("%d \n", max_tableau(t,SIZE));
}