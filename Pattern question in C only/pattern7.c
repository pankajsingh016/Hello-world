//Printing Diamond Pattern
/*
   6
      *
     ***
    *****
   *******
  *********
 ***********
 ***********
  *********
   *******
    *****
     ***
      *
      */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number\n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        for(int m=n;m-i>=0;m--)
        {
            printf(" ");
        }
        for(int m=1;m<=2*i-1;m++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    for(int i=1;i<=n;i++)
    {
        for(int m=1;m<=i;m++)
        {
            printf(" ");
        }
       
       
        for(int j=2*n;j>=2*i;j--)
        {
            printf("*");   
        }
        printf("\n");
    }

    return 0;
} 