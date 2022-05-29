#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n,j,i,temp;
    printf("Enter the total number of element you want to Sort\n");
    scanf("%d",&n);
    
    ptr= (int*) malloc(n*sizeof(int));
    
   for(int i=0;i<n;i++)
   {
       printf("Enter Element %d -:",i);
       scanf("%d",ptr+i);
       printf("\n");
   }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ptr+j<ptr+j+1)
            {
                temp = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = temp;
            }
        }
    }
    printf("\nSorted Array is -: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    free(ptr);
    return 0;
}