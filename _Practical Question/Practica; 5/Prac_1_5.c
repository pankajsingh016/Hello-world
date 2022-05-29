#include<stdio.h>
int main()
{
    float p,q,r,k;

    fflush(stdin);
    int n;
    printf("Enter The Total Number of Person\n");
    scanf("%d",&n);
    
   

     float ar[n];
    
   

    printf("Enter the Ratio of 25,50 paisa and 1 Rupee\n");
    scanf("%f",&p);
    scanf("%f",&q);
    scanf("%f",&r);

    k=p+q+r;
    
    for(int i=0;i<n;i++)
    {
        printf("Enter Money %d Have-:",i+1);
        scanf("%f",&ar[i]);
    }
     
    for(int i=0;i<n;i++)
    {
        printf("User %d",i);
        printf("\t\t %.2f (25 Paise)",((p*ar[i])/k));
        printf("\t\t %.2f (50 Paise)",(q*ar[i])/k);
        printf("\t\t %.2f (1 Rupee)",(r*ar[i])/k);   
        printf("\n");     
    }

    return 0;
}