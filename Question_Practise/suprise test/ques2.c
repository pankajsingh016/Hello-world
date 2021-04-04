#include<stdio.h>
int main()
{
    int a,n,rev=0;
    int *ptr=&a;
    int *rv=&rev;
     printf("Enter the Number -:");
     scanf("%d",ptr);
    while(*ptr>0)
    {
        int k= *ptr%10;
        rev = rev*10 + k;
        *ptr = *ptr/10;
    }
    printf("Reversed Number is -: %d",*rv);
    return 0;
}