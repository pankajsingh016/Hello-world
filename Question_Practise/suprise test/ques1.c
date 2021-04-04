#include<stdio.h>
int main()
{
    int a;
    
    printf("Enter the value-:");
    scanf("%d",&a);

    int *ptr=&a;
    printf("\nValue of (a) using pointer %d",*ptr);
    printf("\nAddress of variable a -:%p",ptr);
    printf("\nAddress of Pointer ptr-:%p",&ptr);
    return 0;
}