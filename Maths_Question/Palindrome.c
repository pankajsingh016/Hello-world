//Palindrom Number are those which are equal to the reverse of them 
// Example -: 121 <-Reverse-> 121
#include<stdio.h>
int main()
{
    int n;
    int rev=0,hold;
    printf("Enter a Number -:");     //Takes the Number
    scanf("%d",&n);
    hold = n;
    while(hold>0)
    {
        rev = (rev*10)+(hold%10);        //Reversing the Number Algorithm
        hold = hold/10;
    }    
    if ( rev == n) 
    {
          printf("Yes! it is a Palindrome Number\n");
    }
    else
    {
        printf("No! it is not a Plaindrome Number\n");
    }
    
    return 0;
}