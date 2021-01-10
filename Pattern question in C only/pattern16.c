/*
    01234
  0 33333
  1 32223
  2 32123
  3 32223
  4 33333
*/
#include<stdio.h>

int main()
{
    int n;
    int l,min;
    printf("\n\n Enter Number to Check-:\n");
    scanf("%d",&n);
    l=2*n-2;
    
    for(int i=0;i<=l;i++)
    {
        for(int j=0;j<=l;j++)
        {
                 min = i>j? j:i;
                 min = min<(l-j)?min:(l-j);
                 min = min<(l-i)?min:(l-i);
                 printf(" %d ",n-min);
        }
        printf("\n");
    }
}
  