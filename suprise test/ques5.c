#include<stdio.h>
void sortage(int);
void evenroll(int);
void userroll(int);
void print(int);
struct student 
{
    int roll;
    int age;
    int mark;
    char name[20];

};
struct student s[2];

int main()
{
    int n=2;
    
     for(int i=0;i<n;i++)
     {
         printf("Enter the Name-:");
         fgets(s[i].name,20,stdin);
         fflush(stdin);
        
         printf("Enter the Age-:");
         scanf("%d",&s[i].age);
         fflush(stdin);

         printf("Press 1 to Decide the Roll Number and 0 computer to decide-:");
         scanf("%d",&s[i].mark);
         if(s[i].mark==1)
         {
             printf("Enter the Roll-:");
             scanf("%d",&s[i].roll);
             fflush(stdin);
         }
         else
         {
             s[i].roll=i+n;
             fflush(stdin);
         }
         

     }
     printf("Data of Age 14-:\n");
     sortage(n);
     printf("Data of even roll number -:\n");
     evenroll(n);
     printf("Data of User Defined roll number-:\n");
     userroll(n);
    
}

void print(int i)
{   
    printf("\n******************************************************************");
    printf("\nName-:%s",s[i].name);
    printf("\nAge-:%d",s[i].age);
    printf("\nRoll No.-:%d",s[i].roll);
    printf("\n*****************************************************");
}

void sortage(int n)
{
        for(int i=0;i<n;i++)
        {
            if(s[i].age==14)
            {
                print(i);
            }
        }       
}
void evenroll(int n)
{
        for(int i=0;i<n;i++)
        {
            if(s[i].roll%2==0)
            {
                print(i);
            }
        }  
}
void userroll(int n)
{
     for(int i=0;i<n;i++)
     {
         if(s[i].mark==0)
         {
             print(i);
         }
     }
}