#include<stdio.h>
struct student_report
{
    char name[20];
    int roll;
    float chem_marks,maths_marks,phy_marks;
    float per;
};

struct student_report s[1]; 

int main()
{   
    int n=1;
    for(int i=0;i<n;i++)
    {
      printf("Enter the Name-:");
      scanf("%s",&s[i].name);
      fflush(stdin);
      printf("Enter the Roll Number-:");
      scanf("%d",&s[i].roll);
      fflush(stdin);
      printf("Enter the Chemistry Marks-:");
      scanf("%f",&s[i].chem_marks);
      fflush(stdin);
      printf("Enter the Maths Marks-:");
      scanf("%f",&s[i].maths_marks);
      fflush(stdin);
      printf("Enter the Physics Marks-:");
      scanf("%f",&s[i].phy_marks);

      s[i].per = (s[i].chem_marks+s[i].maths_marks+s[i].phy_marks);
      s[i].per = s[i].per/3;
    }
    for(int i=0;i<n;i++)
    {
        printf("\nName is -:%s",s[i].name);
        printf("\nRoll Number-:%d",s[i].roll);
        printf("\nPercentage is -:%.2f%%",s[i].per);
    }

      return 0;
}