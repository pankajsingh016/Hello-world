#include <stdio.h>
int main()
{
    int n;
    int nu;
    printf("Enter the Number -:");
    scanf("%d", &nu);
    printf("******************************Make a Choice******************************\n");
    printf("1. Check the Number is Even or Odd\n");
    printf("2. Check number is Positive or Negative\n");
    printf("3. Square of the number\n");
    printf("4. Find Factorial of Number\n");
    printf("*************************************************************************\n");
    scanf("%d", &n);

    switch (n)
    {

    case 1:
    {
        if (nu % 2 == 0)
        {
            printf("\nThe Number is Even");
        }
        else
        {
            printf("\nthe Number is Odd");
        }
        break;
    }
    case 2:
    {
        if (nu > 0)
        {
            printf("\nThe Number is Positive");
        }
        else
        {
            printf("The Number is Negative");
        }
        break;
    }
    case 3:
    {
        printf("The Square of the Number is %d",nu*nu);
        break;
    }
    case 4:
    {
        int a=1;
        int i=1;
        while(nu>=i)
        {
              a=a*i;
              i++;
        }
        printf("The Factorial of %d is %d",nu,a);
        break;
    }

    default:
    {
        printf("Invalid Entry");
    }

    }

}
