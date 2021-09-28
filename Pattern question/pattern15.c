//Printing trapezium
/*

     ****          ****
    ******        ****** 
   ********      ********
  **********    **********
 ************  ************
 **************************
  ************************
   **********************
    ******************** 
     ******************
      ****************
       **************
        ************
         **********
          ********
           ******
            ****
             **
*/
#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter Rows-:\n");
    scanf("%d",&n);
    int k=n-2;
    for(int i=0;i<n;i++)
    {   
        for(int m=0;m<n-i;m++)
        {
            printf(" ");
        }
        
        for(int j=0;j<= k;j++)
        {
                          printf("*");
        }
        
        for(int m=0;m<2*n-2*i;m++)
        {
            printf(" ");
        }
        for(int j=0;j<=k;j++)
        {
                    printf("*");
        }
        k=k+2;
        printf("\n");
    }
  int p=0;
    for(int k=0;k<=5*n;k++)
    {
        for(int m=0;m<=k;m++)
        {
            printf(" ");
        }

         for(int j=0;j<=5*n-k-p;j++)
         {
             printf("*");
         }
         printf("\n");
         p=p+1;
    }
   
   return 0;
}