#include<stdio.h>

void print(int *x)
{
    int temp=*x;
    printf("The Number is -: %d",temp);
}

int main()
{
    int n;
    printf("Enter the Number -:");
    scanf("%d",&n);
    print(&n);
    return 0;
}