//Count Number of Words
#include <stdio.h>

int main()
{
    char str[200];
    int i, count = 0;

    printf("Enter string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' &&
           (i == 0 || str[i - 1] == ' '))
        {
            count++;
        }
    }

    printf("Number of words = %d", count);

    return 0;
}