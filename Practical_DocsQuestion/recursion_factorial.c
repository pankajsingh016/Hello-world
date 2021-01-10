#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        n = fact(n-1)*n;
    }
    return n;
}
int main()
{
    int a;
     printf("Enter the Number -:");
     scanf("%d",&a);
     printf("Factorial of %d is %d",a,fact(a));
}