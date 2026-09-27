//Minimum and Maximum using Function
#include <stdio.h>

void minMax(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d", max);
}

int main()
{
    int arr[5] = {10, 5, 20, 8, 15};

    minMax(arr, 5);

    return 0;
}