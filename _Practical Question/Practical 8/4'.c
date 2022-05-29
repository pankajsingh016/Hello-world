#include<stdio.h>

struct student{
    int cgpa[5];
    char name[20];
    float avg;
};

struct student s[5];

void eligible(int);
void noneligible(int);

int main()
{
    int sum=0;
printf("\n****************************************************************\n");
    for(int i=0;i<5;i++)
    {
        sum=0;
        fflush(stdin);
        printf("Enter the Name of Student -:\n");
        fgets(s[i].name,20,stdin);
        
        for(int j=0;j<5;j++)
        {
            printf("Enter the CGPA of %d Semester of %s",j,s[i].name);
            scanf("%d",&s[i].cgpa[j]);
            fflush(stdin);
        }
  printf("\n****************************************************************");
  printf("\n****************************************************************\n");
        for(int j=0;j<5;j++)
        {
              sum=sum+s[i].cgpa[j];   
        }

        s[i].avg=sum/5;
    }
    for(int i=0;i<5;i++)
    {
        eligible(i);
        fflush(stdin);
        noneligible(i);

    }

    return 0;
}

void eligible(int k)
{
    if(s[k].avg>=8)
    {
        
        printf("Name-:%s\n",s[k].name);
        
        for(int j=0;j<5;j++)
        {
                printf("CGPA score in sem %d -: %d-:\n",j,s[k].cgpa[j]);
        }
        printf("Final CGPA Score-: %f\n",s[k].avg);
        printf("\n****************************************************************\n");
    }
}

void noneligible(int k)
{
    printf("\n********************************************************************\n");
    if(s[k].avg<8)
    {
        printf("Name-:%s \n",s[k].name);
        printf("Not Elegible\n");
        printf("Final CGPA Score-: %f",s[k].avg);
        
    }
    printf("\n****************************************************************\n");
}



   