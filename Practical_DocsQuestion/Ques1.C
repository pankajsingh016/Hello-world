#include<stdio.h>
int main()
{
    int n=10;
    int ar[n];
    int *ptr = ar;
  
      
      for(int i=0;i<n;i++)
      {
          printf("\n Enter Element %d -:",i);  //Taking Element inside array
          scanf("%d",ptr);
          ptr++;
      }
       ptr--;
      printf("Array in Reverse Order is-:\n");
      for(int i=0;i<n;i++)
      {
          printf(" %d ",*ptr);   //Printing in reverse using pointers
          ptr--;
      }


    return 0;
}