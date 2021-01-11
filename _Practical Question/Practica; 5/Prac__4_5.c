#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Size of Array-: ");
    scanf("%d",&n);
    int ar[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the Element ar[%d] ",i+1);
        scanf("%d",&ar[i]);
    }

    for(int j=n/2-1;j<n;j++)
    {
           int temp=ar[j];
           int i=j;
           while(i>0)
           {
               ar[i]=ar[i-1];
               i--;
           }
           ar[i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }

    return 0;
}