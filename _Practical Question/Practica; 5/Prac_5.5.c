#include<stdio.h>
int main()
{
    int n,count=0;
    
    printf("Enter Total Number of Students -:");
    scanf("%d",&n);
    
    float d[n];
    float t[n];
    float ms;

    printf("\nEnter the Speed Limit Set by University -:");
    scanf("%f",&ms);

    for(int i=0;i<n;i++)
   {
           printf("Enter the Distance of Student %d -:",i+1);
           scanf("%d",&d[i]);

           printf("Enter the Time of Student %d -:",i+1);
           scanf("%f",&t[i]);

           int speed = d[i]/t[i];
           if(speed>ms)
           {
                 count++;
           }

   }

   if(count==n)
   {
       printf("No, one is following the speed limit in Class\n");
   }
   else if(count<n)
   {
       printf("Only Few People are following Rules\n");
   }
   else if(count<n-n/2)
   {
       printf("Only Few People are Breaking Rules\n");
   }
   else if(count==0)
   {
       printf("Every one is following Rules\n");
   }
    
    return 0;
}