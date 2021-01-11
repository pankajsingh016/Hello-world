#include<stdio.h>

int fact(int);

int main()
{
    int a;
    printf("Enter a Number to find factorial of\n");
    scanf("%d",&a);
    int fa = fact(a);
    printf("%d",fa);
    return 0;
}
int fact(int x)
{
    if(x==1)
    {
        return x;
    }
    else
    {
        x= x*fact(x-1);
    }
    

}