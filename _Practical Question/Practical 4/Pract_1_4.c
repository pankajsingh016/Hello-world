// A Salesman has n things to sale . The cost price of all n things is different
//out of which p things he is selling on m% profit and n-p he is going to sell on x%
// loss . fing his net profit or loss.
#include <stdio.h>
int main()
{
    int n, test; //Declaring Requried Variables
    float pp, ll, profit = 0, loss = 0;

    printf("Enter Total Items In Shop::\n"); //Getting all items in Shop
    scanf("%d", &n);

    printf("Enter Profit Percent::\n"); //Asking his profit percent
    scanf("%f", &pp);

    printf("Enter Loss Percent::\n"); //Asking his loss percent
    scanf("%d", &ll);
    fflush(stdin);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the Amount of %d Item::", i + 1); //Asking data about shop
        scanf("%d", &ar[i]);
    }
    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        printf("Item (%d)::Press (1) for profit and (0) for loss-:", i + 1); //separting data
        scanf("%d", &test);
        fflush(stdin);
        //ACcording to profit and loss
        if (test == 1)
        {
            profit = profit + (ar[i] + ar[i] * pp); //Calculating whole profit
        }
        else
        {
            loss = loss + (ar[i] + ar[i] * ll); //Calculating whole loss
        }
    }
    printf("Net Profit Salesperson get %f \n", profit);
    printf("Net Loss Salesperson get %f \n", loss);
    if (profit > loss)
    {
        printf("Salesperson is in profit of %f \n", profit - loss);
    }
    else if (profit < loss)
    {
        printf("Salesperson is in loss of %f \n", loss - profit);
    }
    else
    {
        printf("Neither Loss nor Profit\n");
    }

    return 0;
}
