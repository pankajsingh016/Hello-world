#include<stdio.h>
void covidbonus(int *x,int);
int main()
{
    int n;
    printf("Enter Total Number of Person-:");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the Bank Balance of Person[%d] -:",i);
        scanf("%d",&ar[i]);
    }
    covidbonus(ar,n);
    printf("\n");
      
    return 0;
}
void covidbonus(int *x,int n)
{
        for(int i=0;i<n;i++)
        {
            if(*x==0)
            {    
                *x=1000;
                printf("\nAmount Credited in Peson[%d] account with %d rupees only",i,*x);
            }
            x++;
        }
}