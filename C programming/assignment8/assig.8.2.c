//Search Number using Function
#include <stdio.h>

void search(int arr[], int n, int num)
{
    int found = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Number found");
    else
        printf("Number not found");
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    search(arr, 5, num);

    return 0;
}