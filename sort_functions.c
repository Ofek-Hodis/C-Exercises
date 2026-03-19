#include <stdio.h>

// Displaying the contents of an array
void display_array(const int T[], const int SIZE)
{
    for (int i=0; i<SIZE; i++)
    {
        printf("%d ", T[i]);
    }
    printf("\n");
}

void bubble_sort(int array[], const int SIZE)
{
    int temp =0;
    for (int i=0; i<SIZE-1; i++)
    {
        int is_changed = 0;
        for (int j=0; j<SIZE-1-i; j++)
        {
            if (array[j]>array[j+1])
            {
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
                is_changed = 1;
            }
        }
        if (is_changed == 0) break;
    }
}

void selection_sort(int array[], const int SIZE)
{
    int temp = 0;
    for (int i=0; i< SIZE-1; i++)
    {
        int min = i;
        for (int j=i+1; j<SIZE; j++)
        {
            if (array[j] < array[min]) min = j;
        }
        if (min != i)
        {
            temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}

int main()
{
    int exercise;
    printf("Enter exercise number");
    scanf("%d", &exercise);
    int array[] = {3, 7, -1 ,2, 11, 10};
    const int SIZE = 6;
    switch (exercise)
    {
    case 1:
        {
            display_array(array, SIZE);
            bubble_sort(array, SIZE);
            display_array(array,SIZE);
            break;
        }

    case 2:
        {
            display_array(array, SIZE);
            selection_sort(array, SIZE);
            display_array(array,SIZE);
            break;
        }
    default: printf("Default case");
    }
    return 0;
}