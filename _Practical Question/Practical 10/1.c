#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    int n, i;
    printf("Enter the Memory to Allocate into String\n");
    scanf("%d", &n);
    ptr = (char *)malloc(n * sizeof(char));
    if (ptr == NULL)
    {
        printf("Null Pointer!");
        return 0;
    }
    printf("Enter the String-:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%c", ptr + i);
    }
    *(ptr + i) = '\0';
    printf("The String you have entered is --: %s", ptr);

    fflush(stdin);

    printf("\nEnter New Memory for Allocation of 2nd string-:");
    scanf("%d", &n);

    ptr = (char *) realloc(ptr, n * sizeof(char));

    if (ptr == NULL)
    {
        printf("Null Pointer!");
        return 0;
    }
    printf("Enter the String-:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%c", ptr + i);
    }
    *(ptr + i) = '\0';
    printf("The String you have entered is --:\n %s", ptr);
    fflush(stdin);
    free(ptr);

    return 0;
}