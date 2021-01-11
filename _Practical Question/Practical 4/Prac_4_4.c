#include <stdio.h>
#include <limits.h>
int main()
{
    int ar[5] = {0, 0, 0, 0, 0};       //Declaring Variable and array to store the responses
    int a = 0, n;                      //Index of the array will act like the option in this program
    int m = INT_MIN, pos;

    printf("Enter the Number of People You are Going to Survery\n");
    scanf("%d", &n);                   //Taking Number of People to take survey from

    for (int i = 0; i < n; i++)  //Displaying option in front of the user
    {

        printf("Choose One Condition If You Can't Buy Ticket Right Now\n");
        printf("*********************************************************************\n");
        printf("1. Rush To the Train To Catch the Train and Inform T.T at Next Stop\n");
        printf("2. Catch the Train and do journey without Train-Ticket\n");
        printf("3. Purchase the Ticket and First Otherwise wait for next Train\n");
        printf("4. Miss the Train and Take ticket for Next train\n");
        printf("*********************************************************************\n");
        printf("You Are Person Number (%d)\n Enter Your Response \n", i + 1);
        scanf("%d", &a);

        switch (a)   //Switch is here to separtate the responses into the desired indexes
        {
        case 1:
        {
            ar[1]++;
            break;
        }
        case 2:
        {
            ar[2]++;
            break;
        }
        case 3:
        {
            ar[3]++;
            break;
        }
        case 4:
        {
            ar[4]++;
            break;
        }
        default:  //If user Enter the wrong input then it will redirect him to put the correct response
            printf("\t\t\n\nYour Response is Not counted Kindely Enter Again.\n\n");
            i = i - 1;
        }
    }

    for (int i = 1; i < 5; i++)   //Calculate the index number or option with highest digit
    {
        printf("People choosen Option %d are %d.\n", i, ar[i]);
        if (m < ar[i])
        {
            pos = i;
            m = ar[i];
        }
    }

    //Displaying the report according to the Resopnses by the Peoples
    printf("\n********************---REPORT GENERATED FROM SURVEY---************************\n");
    printf("Majority of People are with option %d.\n\n", pos);
    if (pos == 1)
    {
        printf("Most of the People are Honest.\n They are Late but Managed to reach to work on time.\n");
    }
    else if (pos == 2)
    {
        printf("Most of the People are dishonest.\n But wanted to reach office in time.\n");
    }
    else if (pos == 3)
    {
        printf("Most People in the country are Honest.\n And having Patience in them.\n");
    }
    else if (pos == 4)
    {
        printf("Most of the People are Honest.\n And their Job allows them to be Late.\n");
    }
    return 0;
}