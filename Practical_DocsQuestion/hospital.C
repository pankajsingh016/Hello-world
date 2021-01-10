#include<stdio.h>
int n=2;
void print(int n);
struct hospital
{
    char name[10];
    unsigned int patid;
    long long int conta;
    char disae[10];
    char doa[9];
};

 struct hospital patient[2];

int main()
{  
    

    for(int i=0;i<n;i++)
    {
        printf("Details of Patient %d -:\n",i);
        printf("*******************************************************\n");
        printf("Enter Name -:");
        fgets(patient[i].name,10,stdin);
        fflush(stdin);

        printf("\nEnter Patient ID %u-:");
        scanf("%u",&patient[i].patid);
        fflush(stdin);

        printf("\nEnter Contact Details-:");
        scanf("%lld",&patient[i].conta);
        fflush(stdin);

        printf("\nEnter the Disease -:");
        fgets(patient[i].disae,10,stdin);
        fflush(stdin);

        printf("\nEnter the Date of Admission-:");
        scanf("%s",patient[i].doa);
        fflush(stdin);    
    }
     
   print(n);
    return 0;
}

void print(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Details of Patient %d -:\n",i);
        printf("*******************************************************\n");
        printf("Name -: %s",patient[i].name);
        fflush(stdin);

        printf("\nPatient ID %u-:",patient[i].patid);
        fflush(stdin);

        printf("\nContact Details-: %lld",patient[i].conta);
        fflush(stdin);

        printf("\nEnter the Disease -:",patient[i].disae);
        fflush(stdin);

        printf("\nEnter the Date of Admission-: %s",patient[i].doa);
        fflush(stdin);    
    }
}