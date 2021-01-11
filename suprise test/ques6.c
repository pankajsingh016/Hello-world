#include<stdio.h>
struct date
{
    int date;
    int month;
    int year;
};

struct date d[2];

int main()
{
    int n=2;
    for(int i=0;i<n;i++)
    {
         printf("Enter the Day-:");
         scanf("%d",&d[i].date);
         printf("Enter the Month-:");         
         scanf("%d",&d[i].month);
         printf("Enter the Year-:");
         scanf("%d",&d[i].year);

    }

    if(d[0].date==d[1].date && d[0].month==d[1].month  && d[0].year==d[1].year)
    {
         printf("\nDates are Equal");
    }
    else
    {
        printf("\nDate are Unequal");
    }
    
}