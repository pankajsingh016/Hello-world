#include<stdio.h>
#include<math.h>
struct mother
{
   int age;
   char name[10];
   float height;
   int work;
}sm[2];

struct father
{
    int age;
    char name[10];
    float height;
    int work;
}sf[2];

void input(int);
void mismatch(int);
void working(int);


int main()
{
    int n;
    printf("Enter the Total Number of Student-:\n");
    scanf("%d",&n);
    input(n);
    mismatch(n);
    working(n);
    return 0;
}


void input(int n)
{
            for(int i=0;i<n;i++)
   {   printf("Taking Data of Student %d",i);
       printf("\n***************************************************************************");

       fflush(stdin);
       printf("\nEnter your Mother Name-:");
       fgets(sm[i].name,10,stdin);
       fflush(stdin);
       printf("\nEnter your Father Name-:");
       fgets(sf[i].name,10,stdin);
       
       fflush(stdin);
       printf("\nEnter Mother Height-:");
       scanf("%f",&sm[i].height);
       
       printf("\nEnter Father Height-:");
       scanf("%f",&sf[i].height);
       fflush(stdin);
       printf("\nEnter the 1 and 0 for yes or No\n");
       
       printf("Working Status of Mother [1 or 0] in case of [yes or no] -:\n");
       scanf("%d",&sm[i].work);
       fflush(stdin);
       printf("Enter status of Father work-:\n");
       scanf("%d",&sf[i].work);
       fflush(stdin);

   }
  
}
void mismatch(int n)
{   
    float sum=0;
    printf("\n******************************************************************\n");
    printf("Mismatch Finder Program -:");
    fflush(stdout);
   for(int i=0;i<n;i++)
   {
       
       float dif = ((sm[i].height) - (sf[i].height));
       
       sum = sum + dif;
       if(dif<0)
       {
           dif=dif *(-1);
       }
       if(dif>=10)
       {
           printf("\n %s Mismatched %s \n",sm[i].name,sf[i].name);
       }
   }
   printf("\nThe Average Height Difference is -: %.2f",sum/n);
   printf("\n********************************************************************\n");
}

void working(int n)
{
    int total=0;
    float per;
    printf("\n********************************************************************\n");
    for(int i=0;i<n;i++)
    {
        if(sm[i].work==1)
        {
              total++;
        }
    }
    per = ((total*100)/n);
    printf("\nPercentage of Working Women-: %.2f",per);
    if(per>=70)
    {
        printf("\nWomen are job oriented\n");
    }
    printf("\n********************************************************************\n");
}