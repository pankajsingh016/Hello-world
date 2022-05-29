#include<stdio.h>
struct hospital
{
    int pid;
    long int cot;

    char bg[2];
    char dname[10];
    char doa[8];
}s[2];
int main()
{

    for(int i=0;i<2;i++)
    {
        fflush(stdin);
        printf("********************************************************************");
        printf("\nEnter the Paitent ID-:");
        scanf("%d",&s[i].pid);
        fflush(stdin);
        
        printf("Enter the Name of disease-:");
        scanf("%s",s[i].dname);
        fflush(stdin);
        
        printf("\nEnter the Blood Group-:");
        scanf("%s",s[i].bg);
        fflush(stdin);
       
        printf("\nEnter the Contact Number-:");
        scanf("%ld",&s[i].cot);
        fflush(stdin);
        
        printf("\nEnter the Date of Admit-:");
        scanf("%s",s[i].doa);
        fflush(stdin);
        printf("********************************************************************");

    }
    for(int i=0;i<2;i++)
    {
        printf("********************************************************************\n");
        fflush(stdin);
        printf("Data of Patient -: %d ",s[i].pid);
        fflush(stdout);
        printf("\nContact Number-:%ld \n",s[i].cot);
        fflush(stdout);
        printf("Disease Name-: %s \n",s[i].dname);
        fflush(stdout);
        printf("Blood Group-:%s \n",s[i].bg);
        fflush(stdout);
        printf("Date of Admission-:%s \n",s[i].doa);
        fflush(stdout);
        printf("********************************************************************");
    }
    return 0;
}