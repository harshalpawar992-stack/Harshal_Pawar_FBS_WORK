//Alternate Elements using Function
#include <stdio.h>

void alternate(int arr[], int n)
{
    for(int i = 0; i < n; i = i + 2)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};

    alternate(arr, 6);

    return 0;
}