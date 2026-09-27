//Print Only Prime Numbers
#include <stdio.h>

int main()
{
    int arr[5] = {2, 4, 7, 9, 11};

    for(int i = 0; i < 5; i++)
    {
        int prime = 1;

        if(arr[i] < 2)
            prime = 0;

        for(int j = 2; j < arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime == 1)
            printf("%d ", arr[i]);
    }

    return 0;
}