//Remove nth Index Character
#include <stdio.h>

int main()
{
    char str[100];
    int n, i;

    printf("Enter string: ");
    gets(str);

    printf("Enter index: ");
    scanf("%d", &n);

    for(i = n; str[i] != '\0'; i++)
    {
        str[i] = str[i + 1];
    }

    printf("New string = %s", str);

    return 0;
}