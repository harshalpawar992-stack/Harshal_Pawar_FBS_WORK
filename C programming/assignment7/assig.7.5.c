//Print Alternate Elements
#include <stdio.h>

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};

    for(int i = 0; i < 6; i = i + 2)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}