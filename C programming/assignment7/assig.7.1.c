//Find minimum and maximum number in array
#include <stdio.h>

int main()
{
    int arr[5] = {10, 5, 20, 8, 15};
    int min = arr[0], max = arr[0];

    for(int i = 1; i < 5; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d", max);

    return 0;
}