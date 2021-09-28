/*
To Print the Arrow heard patter
        *****
          ****
            ***
              **
                *
              **
            ***
          ****
        *****
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Rows-:");
    scanf("%d",&n);
    int space = n-1;
    int star = n;
    for(int i=1;i<2*n;i++)
    {
          for(int j=0;j<space;j++)
          {
              printf("  ");    //Will print the space
          }
          for(int m=0;m<star;m++)
          {
              printf("*");     // Will print the stars
          }

          printf("\n");

          if(i<n)          //control the space and the stars
          {
              space++;
              star--;
          }
          else                //control space and star in the second half of the code
          {
              space--;
              star++;
          }
          
    }
    return 0;
}