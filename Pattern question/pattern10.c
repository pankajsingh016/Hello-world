/*
 A
 B  B
 C  C  C
 D  D  D  D
 E  E  E  E  E
 F  F  F  F  F  F
 G  G  G  G  G  G  G

*/

#include<stdio.h>

int main()
{
    int n;
    char ch = 'A';
    printf("Enter Rows-:\n");
    scanf("%d",&n);
 
    for(int i=0;i<=n;i++)
    {
         for(int j=0;j<=i;j++)
         {
             printf(" %c ",ch);
         }
         ch+=1;
         printf("\n");
    }
    return 0;
}