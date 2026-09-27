//Prime Numbers using Function
#include <stdio.h>

int isPrime(int num)
{
    if(num < 2)
        return 0;

    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
            return 0;
    }

    return 1;
}

void printPrime(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(isPrime(arr[i]))
            printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[5] = {2, 4, 7, 9, 11};

    printPrime(arr, 5);

    return 0;
}