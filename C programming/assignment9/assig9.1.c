#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];

    // 1. strlen()
    printf("1. strlen = %lu\n", strlen(str1));

    // 2. strcpy()
    strcpy(str3, str1);
    printf("2. strcpy = %s\n", str3);

    // 3. strncpy()
    strncpy(str3, str2, 3);
    str3[3] = '\0';
    printf("3. strncpy = %s\n", str3);

    // 4. strcat()
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("4. strcat = %s\n", str3);

    // 5. strncat()
    strcpy(str3, str1);
    strncat(str3, str2, 3);
    printf("5. strncat = %s\n", str3);

    // 6. strcmp()
    printf("6. strcmp = %d\n", strcmp(str1, str2));

    // 7. strncmp()
    printf("7. strncmp = %d\n", strncmp(str1, str2, 3));

    // 8. strchr()
    printf("8. strchr = %s\n", strchr(str1, 'l'));

    // 9. strrchr()
    printf("9. strrchr = %s\n", strrchr(str1, 'l'));

    // 10. strstr()
    printf("10. strstr = %s\n", strstr("Hello World", "World"));

    // 11. strtok()
    char text[] = "Java-C-C++";
    char *token = strtok(text, "-");
    printf("11. strtok = ");

    while(token != NULL)
    {
        printf("%s ", token);
        token = strtok(NULL, "-");
    }
    printf("\n");

    // 12. strspn()
    printf("12. strspn = %lu\n", strspn("12345abc", "123456789"));

    // 13. strcspn()
    printf("13. strcspn = %lu\n", strcspn("Hello123", "123"));

    // 14. strpbrk()
    printf("14. strpbrk = %s\n", strpbrk("Hello", "aeiou"));

    // 15. memset()
    char arr[10] = "abcdef";
    memset(arr, '*', 3);
    printf("15. memset = %s\n", arr);

    // 16. memcpy()
    char source[] = "ABCDEF";
    char destination[10];

    memcpy(destination, source, 7);
    printf("16. memcpy = %s\n", destination);

    // 17. memmove()
    char move[20] = "123456";
    memmove(move + 2, move, 4);
    move[6] = '\0';
    printf("17. memmove = %s\n", move);

    // 18. memcmp()
    printf("18. memcmp = %d\n", memcmp("ABC", "ABC", 3));

    // 19. memchr()
    char data[] = "Hello";
    printf("19. memchr = %s\n", (char *)memchr(data, 'l', 5));

    // 20. strerror()
    printf("20. strerror = %s\n", strerror(2));

    // 21. strcoll()
    printf("21. strcoll = %d\n", strcoll("ABC", "ABC"));

    return 0;
}