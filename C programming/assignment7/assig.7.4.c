//Find Odd and Even Numbers
#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Even numbers: ");

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\nOdd numbers: ");

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }

    return 0;
}