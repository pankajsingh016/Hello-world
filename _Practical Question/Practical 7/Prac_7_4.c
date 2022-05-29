#include<stdio.h>
float avg(int x[],int);
int main()
{
    int n;
    printf("Enter the Total No. of STudent\n");
    scanf("%d",&n);
   
    int ar[n];
   
    for(int i=0;i<n;i++)
    {
        printf("Enter the Height of Roll_number-:(%d)",i+1);
        scanf("%d",&ar[i]);
    }
   
    float ted = avg(ar,n);
   
    printf("The Average Height of the Student is : %.2f\n",ted);
    
    return 0;
}

float avg(int x[],int n)
{
    float sum=0;
   
    for(int i=0;i<n;i++)
  
     {
  
         sum=sum+x[i];
  
     }
     return sum/n;
}