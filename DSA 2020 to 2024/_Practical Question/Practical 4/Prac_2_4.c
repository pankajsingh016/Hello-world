#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number\n");
    scanf("%d",&n);
    int i=1000000;

    //Loop for Calculating greatest 6-digit Number divisible by n
    while(1)
    {
        if(i%n==0)
           break;
        i--;
    }
     printf("Greatest 6 Digit-Number divisible by %d is %d \n",n,i);
    i=1000000;
    //Loop for Calculating smallest 7 digit divisible by n
    while(1)
    {
        if(i%n==0)
           break;
        i++;
    }
    printf("Smallest 7 Digit-Number divisible by %d is %d \n",n,i);
    return 0;
}