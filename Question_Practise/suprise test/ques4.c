#include<stdio.h>
void salary(int n);
struct employee
{
    char name[20];
    int salary;
    int hr;
};

struct employee e[2];

int main()
{
    int n=2;
    
     for(int i=0;i<n;i++)
     {
         printf("Enter the Name-:");
         fgets(e[i].name,20,stdin);
         fflush(stdin);
         printf("Enter the Salary-:");
         scanf("%d",&e[i].salary);
         fflush(stdin);
         printf("Enter the Hours-:");
         scanf("%d",&e[i].hr);
         fflush(stdin);

     }
       
        salary(n);
      

      for(int i=0;i<n;i++)
      {
          printf("\nName -: %s",e[i].name);
          printf("\nSalary -: %d",e[i].salary);
          printf("\nHours -: %d",e[i].hr);

      }
    return 0;
}

void salary(int n)
{
    for(int i=0;i<n;i++)
    {
        if(e[i].hr>=12)
        {
            e[i].salary=150;
        }
        else if(e[i].hr>10)
        {
            e[i].salary=100;
        }
        else if(e[i].salary>=8)
        {
            e[i].salary=50;
        }
        
    }
}