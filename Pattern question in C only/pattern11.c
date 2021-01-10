/*
     *
    * *
   *   *
  *     *
 *       *
***********

*/
#include <stdio.h>

int main()
{
    int n;

    printf("Enter Rows\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (i == n - 1)
            {
                printf("*");
            }

            else if (i < n - 1)
            {
                if (j == n - i || j == n + i)
                {
                    printf("*");
                }

                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}