#include <stdio.h>

int binary_search(const int array[], const int LENGTH, int value_searched)
{
    int mid = 0, low = 0;
    int high = LENGTH-1;
    int value;
    while (low<=high)
    {
        mid = (high+low)/2;
        value = array[mid];
        if (value < value_searched)
        {
            low = mid + 1;
        }
        else if (value == value_searched)
            return mid;
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}


int main()
{
    const int LENGTH = 10;
    int array[] = {1, 3, 4, 5, 6, 8, 10, 11, 12, 15};
    int value_searched, index;
    printf("Enter the value you are looking for");
    scanf("%d", &value_searched);
    index = binary_search(array, LENGTH, value_searched);
    if (index == -1)
        printf("Value not found in this array");
    else
    {
        printf("The index of %d in this array is %d\n", value_searched, index);
    }
    return 0;
}

