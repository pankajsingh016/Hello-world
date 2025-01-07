/*
1
23
456
78910


*/

#include<stdio.h>

int main()
{
    int n;
    int k=1;
    int j=2;
    printf("Enter the Number of Rows\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
        if(i==k)
        {
            printf("\n");
            k=k+j;
            j++;
        }

    }
}