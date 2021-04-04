#include<stdio.h>
#include<stdlib.h>

struct employee
{
    int empid;
    char name[20];
    int sal;
};

int main()
{
    int n;
    struct employee *ptr;
    printf("Enter total Number of Employee-: ");
    scanf("%d",&n);
    ptr = (struct employee *) malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        printf("Employee id-:");
        scanf("%d",&(ptr+i)->empid);
        printf("Name of Employee -:");
        scanf("%s",(ptr+i)->name);
        printf("Salary -:");
        scanf("%d",&(ptr+i)->sal);
    }
    
     for(int i=0;i<n;i++)
    {
        printf("Employee id-:%d",(ptr+i)->empid);
        printf("\n");
        printf("Name of Employee -:%s",(ptr+i)->name);
        printf("\n");
        printf("Salary -:%d",(ptr+i)->sal);
    }
    
    return 0;
}