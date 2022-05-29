#include<stdio.h>

     char name[20],dei[10],depar[10],doj[4];
     int empid,wday,is;
     int msal;
    long long int cn;

void input_data()
{
        printf("Enter Details About the employee \n");
        printf("Name-:");
        fgets(name,sizeof(name),stdin);
        
        printf("Desigination-:");
        fgets(dei,sizeof(dei),stdin);
        
        fflush(stdin);
        printf("Enter Department-:");
        fgets(depar,sizeof(depar),stdin);

        fflush(stdin);
        fflush(stdin);

        printf("Employee id-:");
        scanf("%d",&empid);
        
        printf("Working Days-:");
        scanf("%d",&wday);
        
        fflush(stdin);
        fflush(stdin);
        printf("Date of Joining-:");
        fgets(doj,sizeof(doj),stdin);

        fflush(stdin);

        printf("Initial Salary-:");
        scanf("%d",&is);

        fflush(stdin);
        fflush(stdin);
       
        printf("Enter the Contact Number-:");
        scanf("%lld",&cn);

} 

int calc_sal()
{
    msal = (is/30)*wday;    
}

void display()
{
   int dudct;
   int sa_given;
   printf("Name- %s \n",name);
   printf("Designation- %s \n",dei);
   printf("Department- %s \n",depar);
   printf("Enter the Salary Deduction of this month-:\n");
   scanf("%d",&dudct);
   int get =calc_sal();
  sa_given= get - dudct;
   printf("Salary of the Month-:%d",sa_given);
}
int main()
{
    input_data();
    display();

    return 0;
}