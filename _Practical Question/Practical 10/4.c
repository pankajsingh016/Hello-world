#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,i;
    int *ptr,*rpt;
    int per=0;
    float perc;
    
    printf("Enter the Number of Student in Group A-:\n");
    scanf("%d",&n);
    
    printf("Enter the Number of Student in Group B-:'n");
    scanf("%d",&m);
    
    float total = (m+n)*100;
    
    ptr = (int *) malloc(n*sizeof(int));
    printf("Enter Marks of Group A-: \n");
    for(i=0;i<n;i++)
    {
        printf("\n Enter Element %d -:",i);
        scanf("%d",ptr+i);
        per=per + *(ptr+i);
    }
    
    
    rpt = (int*) malloc(m*sizeof(int));

    printf("Enter Maks of Group B:\n");
    for(i=0;i<m;i++)
    {
        printf("Enter Element %d -:",i);
        scanf("%d",rpt+i);
        per=per+ *(rpt+i);
    }

    perc = (per*100)/total;
    printf("Percentage of the Section -: %.2f",perc);

     free(ptr);
     free(rpt);
    return 0;
}