#include<stdio.h>
void max(int *x,int *y);
int main()
{
    int a,b;
    printf("Enter the 1st Number-:");
    scanf("%d",&a);
    printf("Enter the 2nd Number-:");
    scanf("%d",&b);
    max(&a,&b);
    printf("Maximum Value is -:%d",a);
    return 0;
}
void max(int *x,int *y)
{
     *x = *x>*y?*x:*y;
}