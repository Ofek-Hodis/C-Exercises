#include <stdio.h>
#define FACES 6
#define SIZE_dice 13

void dice_probability()
{
    int t[SIZE_dice];
    for (int i=1; i <= FACES; i++)
    {
        for (int j=1; j <= FACES; j++)
        {
            t[i+j]++;
        }
    }

    int max = 0;
    for (int i=0; i < SIZE_dice; i++)
    {
        if (t[i] > t[max])
            max = i;
    }

    printf("The most probable combination is %d", t[max]);
    printf("%lf", t[max]/36.0);

}

void exo_5(const int SIZE, int t[SIZE])
{

}


int main ()
{

}