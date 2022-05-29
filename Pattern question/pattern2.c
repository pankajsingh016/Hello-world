/*
A
BB
CCC
DDDD
EEEEE
*/
#include<stdio.h>
int main()
{
    int n;
    char c ='A';
    printf("Enter the Rows\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=i;j++)
        {
            printf("%3c",c);
        }
        c+=1;
        printf("\n");

    }

}