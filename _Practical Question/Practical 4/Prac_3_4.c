#include <stdio.h> //declaring header files
#include <math.h>  //This header file for using power function
int main()
{
    int n;
    float rate; //Declaring Size and Rate

    printf(" Enter the Number of Customer-:\n"); //Asking for Number of customer
    scanf("%d", &n);

    int cust[n];
    float time[n];
    double loan[n], interest[n]; //Declaring array to store different data
    double totalint = 0;         //Related to the user
    double sumloan = 0;

    fflush(stdin);

    printf("Enter the General Rate of Bank-:\n"); //Taking rate from the Bank
    scanf("%f", &rate);
    rate = rate / 100;
    rate = rate + 1;

    fflush(stdin);

    printf("***************************************************************************\n");

    for (int i = 0; i < n; i++) //Taking value from the user and storing them into the
    {                           //Arrays of time and loan
                                //Also at the same time calculating interest for the same

        printf("Custormer %d ::Enter Loan Taken-:", i + 1);
        scanf("%lf", &loan[i]);

        fflush(stdin);

        printf("\nEnter the Time for Loan-:");
        scanf("%f", &time[i]);

        printf("\n\n");

        fflush(stdin);

        interest[i] = loan[i] * (pow((rate), time[i])); //Calculating interest for the i th customer

        sumloan += loan[i];                //Adding all the loan
        totalint = interest[i] + totalint; //Adding total Interest
    }

    //Displaying the Interest Amount to be Paid by each user
    for (int i = 0; i < n; i++)
    {
        printf("Rate Paid by %d is %.2lf -:\n", i + 1, interest[i]);

        fflush(stdin);
    }

    //Displaying the Total Amount to the Bank to paid by all
    printf("Total Interest to be Paid to the Bank is %.2f \n", totalint);

    //Displaying the total earned interest amount by the bank
    printf(" \nTotal Interest earned by the Bank is %.2lf", totalint - sumloan);

    printf("*******************************************************************\n");
    return 0;
}