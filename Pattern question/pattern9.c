/*
1111111111
1111  1111
111    111
11      11
1        1
1        1
11      11
111    111
1111  1111
1111111111

*/

#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter Rows\n");
    scanf("%d",&n);

    for(int i=n;i>0;i--)
    {
           for(int j=1;j<=i;j++)
           {
                  printf("1");
           }

           for(int m=0;m<2*n-2*i;m++)
           {
                  printf(" ");
           }

           for(int j=1;j<=i;j++)
           {
               printf("1");
           }
                
                printf("\n");
    }
     for(int i=1;i<=n;i++)
    {
           for(int j=1;j<=i;j++)
           {
                  printf("1");
           }

           for(int m=0;m<2*n-2*i;m++)
           {
                  printf(" ");
           }

           for(int j=1;j<=i;j++)
           {
               printf("1");
           }
                
                printf("\n");
    }



    
    return 0;
}