/*
     1
    1 1
   1 2 1
  1 3 3 1
*/


#include<stdio.h>

int main()
{
    int n;
    int a=11,b=1;
    printf("Enter Rows\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {    
        for(int j=0;j<=n-i;j++)
        {
            printf(" ");
        }

        if(i==0)
        {
            printf(" 1 ");
        }
        else
        {
            a=a*b;
            printf(" %d ",a);
            b=11;
        }
        
        
        printf("\n");
    }
    return 0;
}