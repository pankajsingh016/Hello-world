#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,m,*ptr;
    printf("Enter Total No. of Student-:");
    scanf("%d",&n);
    
    printf("\n");
    
    ptr = (int*) malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++)
    {
        printf("Enter Roll no. of student %d -:",i);
        scanf("%d",ptr+i);
    }
    
    printf("Enter Total Student come late-:");
    scanf("%d",&m);
    
    ptr = (int *) realloc(ptr,(m+n)*sizeof(int));

    for(int i=n;i<m+n;i++)
    {
        printf("Enter Roll no. of student %d -:",i);
        scanf("%d",ptr+i);
    }

    printf("Roll Numbers of All Students are-:\n");
    for(int i=0;i<m+n;i++)
    {
        printf("%d \n",*(ptr+i));
    }
}