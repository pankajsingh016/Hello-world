/* 1
  232
 34543
4567654
*/

#include<stdio.h>
int main()
{
    int n;
    int m=1;
    int k;
    printf("Enter the Rows\n");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {  m=1;
       k=i;

       for(int p=i;p<n;p++)
       {
           printf("  ");
       }
        for(int j=1;j<=2*i-1;j++)
        {  
             
            printf("%d ",k);
            if(k!=1)
           {  
               if(m<i)
                {k++;
                 m++;
                 }
              else
                 k--;
           } 
          
         }
          printf("\n");
           
    }
       
 }

