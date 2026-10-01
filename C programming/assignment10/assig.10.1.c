/*Strings user define function
1. Write a user define functions for ::
a. mystrcpy
b. mystrlen
c. mystrcmp
d. mystrcat
e. mystrncpy
f. mystrupper
g. mystrlower
h. mystrrev
i. mystrstr
j. mystrcasecmp
k. mystrchr
l. mystrrchr
m. mystrncmp
n. mystrnstr
o. mystrncat
p. mystrncasecmp*/
#include <stdio.h>

int mystrlen(char str[])
{
    int i = 0;

    while(str[i] != '\0')
        i++;

    return i;
}

void mystrcpy(char dest[], char src[])
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

int mystrcmp(char str1[], char str2[])
{
    int i = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
            return str1[i] - str2[i];

        i++;
    }

    return str1[i] - str2[i];
}

void mystrcat(char dest[], char src[])
{
    int i = mystrlen(dest);
    int j = 0;

    while(src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}

void mystrncpy(char dest[], char src[], int n)
{
    int i;

    for(i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    dest[i] = '\0';
}

void mystrupper(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;

        i++;
    }
}

void mystrlower(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;

        i++;
    }
}

void mystrrev(char str[])
{
    int i = 0;
    int j = mystrlen(str) - 1;
    char temp;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

char* mystrstr(char str[], char sub[])
{
    int i, j;

    if(sub[0] == '\0')
        return str;

    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while(sub[j] != '\0' && str[i + j] == sub[j])
        {
            j++;
        }

        if(sub[j] == '\0')
            return &str[i];
    }

    return NULL;
}

int mystrcasecmp(char str1[], char str2[])
{
    int i = 0;
    char ch1, ch2;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        ch1 = str1[i];
        ch2 = str2[i];

        if(ch1 >= 'A' && ch1 <= 'Z')
            ch1 = ch1 + 32;

        if(ch2 >= 'A' && ch2 <= 'Z')
            ch2 = ch2 + 32;

        if(ch1 != ch2)
            return ch1 - ch2;

        i++;
    }

    return str1[i] - str2[i];
}

char* mystrchr(char str[], char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            return &str[i];

        i++;
    }

    return NULL;
}

char* mystrrchr(char str[], char ch)
{
    int i;
    char *last = NULL;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            last = &str[i];
    }

    return last;
}

int mystrncmp(char str1[], char str2[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(str1[i] != str2[i])
            return str1[i] - str2[i];

        if(str1[i] == '\0' || str2[i] == '\0')
            break;
    }

    return 0;
}

char* mystrnstr(char str[], char sub[], int n)
{
    int i, j;

    if(sub[0] == '\0')
        return str;

    for(i = 0; str[i] != '\0' && i < n; i++)
    {
        j = 0;

        while(sub[j] != '\0' &&
              str[i + j] != '\0' &&
              i + j < n &&
              str[i + j] == sub[j])
        {
            j++;
        }

        if(sub[j] == '\0')
            return &str[i];
    }

    return NULL;
}

void mystrncat(char dest[], char src[], int n)
{
    int i = mystrlen(dest);
    int j = 0;

    while(src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}

int mystrncasecmp(char str1[], char str2[], int n)
{
    int i;
    char ch1, ch2;

    for(i = 0; i < n; i++)
    {
        ch1 = str1[i];
        ch2 = str2[i];

        if(ch1 >= 'A' && ch1 <= 'Z')
            ch1 = ch1 + 32;

        if(ch2 >= 'A' && ch2 <= 'Z')
            ch2 = ch2 + 32;

        if(ch1 != ch2)
            return ch1 - ch2;

        if(ch1 == '\0' || ch2 == '\0')
            break;
    }

    return 0;
}


int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    char result[100];
    char *ptr;

    printf("1. mystrlen = %d\n", mystrlen(str1));

    mystrcpy(result, str1);
    printf("2. mystrcpy = %s\n", result);

    printf("3. mystrcmp = %d\n", mystrcmp(str1, str2));

    mystrcpy(result, str1);
    mystrcat(result, str2);
    printf("4. mystrcat = %s\n", result);

    mystrncpy(result, str2, 3);
    printf("5. mystrncpy = %s\n", result);

    mystrcpy(result, str1);
    mystrupper(result);
    printf("6. mystrupper = %s\n", result);

    mystrcpy(result, str1);
    mystrlower(result);
    printf("7. mystrlower = %s\n", result);

    mystrcpy(result, str1);
    mystrrev(result);
    printf("8. mystrrev = %s\n", result);

    ptr = mystrstr("Hello World", "World");
    printf("9. mystrstr = %s\n", ptr);

    printf("10. mystrcasecmp = %d\n",
           mystrcasecmp("HELLO", "hello"));

    ptr = mystrchr("Hello", 'l');
    printf("11. mystrchr = %s\n", ptr);

    ptr = mystrrchr("Hello", 'l');
    printf("12. mystrrchr = %s\n", ptr);

    printf("13. mystrncmp = %d\n",
           mystrncmp("Hello", "Help", 3));

    ptr = mystrnstr("Hello World", "World", 11);
    printf("14. mystrnstr = %s\n", ptr);

    mystrcpy(result, "Hello");
    mystrncat(result, "World", 3);
    printf("15. mystrncat = %s\n", result);

    printf("16. mystrncasecmp = %d\n",
           mystrncasecmp("HELLO", "hello", 5));

    return 0;
}