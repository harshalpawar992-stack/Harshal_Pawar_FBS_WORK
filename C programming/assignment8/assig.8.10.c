//Sort Array using Function
#include <stdio.h>

void sort(int arr[], int n)
{
    int temp;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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
    int arr[5] = {40, 10, 50, 20, 30};

    sort(arr, 5);

    display(arr, 5);

    return 0;
}