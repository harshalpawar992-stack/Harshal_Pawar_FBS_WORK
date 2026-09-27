//Add Two Arrays into Third Array
#include <stdio.h>

void addArray(int arr[], int brr[], int crr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        crr[i] = arr[i] + brr[i];
    }
}

void display(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {10, 20, 30, 40, 50};
    int crr[5];

    addArray(arr, brr, crr, 5);

    display(crr, 5);

    return 0;
}