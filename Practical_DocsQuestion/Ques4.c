#include<stdio.h>
void input_data(int n);
void display_data(int n);
void cal_sal(int n);
struct employee
{
    char name[20]; //
    char dsg[10];//
    char dpt[10];//
    char doa[9];//

    unsigned int empid;//
    unsigned int wd;//
    
    float insal;
    long long int conta;
    

};

struct employee e[1];

int main()
{
    int n=1;
    for(int i=0;i<n;i++)
    {
        input_data(i);
    }
    for(int i=0;i<n;i++)
    {
        display_data(i);
    }

    return 0;
}

void input_data(int n)
{
    printf("\n*******************************************************************\n");
     printf("Enter Name -:");
     fgets(e[n].name,20,stdin);
     printf("\nEnter Employee ID-:");
     scanf("%d",&e[n].empid);
     fflush(stdin);
     printf("\nEnter Department -:");
     fgets(e[n].dpt,10,stdin);
     fflush(stdin);
     printf("\nEnter  Designation -:");
     fgets(e[n].dsg,10,stdin);
     fflush(stdin);
     printf("\nEnter Date of Joning -:");
     fgets(e[n].doa,10,stdin);
     fflush(stdin);
     printf("\nEnter Working Days -:");
     scanf("%u",&e[n].wd);
     fflush(stdin);

     cal_sal(n);
     
     printf("\nEnter Contact Details-:");
     scanf("%lld",&e[n].conta);
     fflush(stdin);
     


}

void display_data(int n)
{
    printf("Details of Employee %d",n);
    printf("\n*****************************************************\n");
    printf("Name -:%s \n",e[n].name);
    printf("\nEmployee ID-:%d",e[n].empid);
    printf("\nDepartment -:%s",e[n].dpt);
    printf("\nDesignation -:%s",e[n].dsg);
    printf("\nDate of Joning -:%s",e[n].doa);
    printf("\nWorking Days -:",e[n].wd);
    printf("\nSalary -:%.2f",e[n].insal);
    printf("\nContact Details-:%lld",e[n].conta);

}

void cal_sal(int n)
{
     printf("\nEnter Salary -:");
     scanf("%f",&e[n].insal);
     fflush(stdin);
}