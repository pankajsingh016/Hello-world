#include<stdio.h>
int main()
{
    int m,n,s;
    int freq=0;                      //Declaring Variables
                                             
    printf("Enter the Lower Limit\n");    //Asking for Lower Limit Value
    scanf("%d",&m);
    
    printf("Enter the Upper Limit\n");    //Asking for Uper Limit Value
    scanf("%d",&n);

    printf("Enter Number You Want to see the Frequency of-:\n");    //Asking for Number to watch for the frequency
    scanf("%d",&s);

    for(int i=m;i<n;i++)
    {
        int temp=i;                              //Thsi whole will count each and every number
        int k;                                   //By breaking each number into the single digits
        while(temp>0)                            // and match with the ask number
        {                                        // them add frequency by 1 if number matches
            k=temp%10;
            if(k==s)
            {
                freq++;
            }
            temp=temp/10;
        }

    }
    printf("Frequency of Number %d is %d.",s,freq);  //Displaying the frequency of the Number with the number

    return 0;
}