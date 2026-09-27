//Reverse Array using Function
#include <stdio.h>

void reverse(int arr[], int n)
{
    for(int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    reverse(arr, 5);

    return 0;
}