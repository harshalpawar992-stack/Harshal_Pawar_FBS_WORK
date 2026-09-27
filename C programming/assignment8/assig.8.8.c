//Merge Two Arrays using Function
#include <stdio.h>

void merge(int arr[], int brr[], int crr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        crr[i] = arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        crr[i + n] = brr[i];
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
    int crr[10];

    merge(arr, brr, crr, 5);

    display(crr, 10);

    return 0;
}