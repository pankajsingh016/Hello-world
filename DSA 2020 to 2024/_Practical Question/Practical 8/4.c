#include <stdio.h>

struct sp
{
    char name[100];
} s[100];

int eligible(double b, struct sp s[], int k)
{
    printf("\nstudent : %s and c.g.p.a : %0.2lf elgible\n", s[k].name, b);
}

int not_eligible(double b, struct sp s[], int k)
{
    printf("\nstudent : %s and c.g.p.a : %0.2lf not elgible\n", s[k].name, b);
}

int main()
{
    int n, i, j;

    double a[100][5];
    printf(" Enter number of students- ");
    scanf("%d", &n);

    double sum[n], cgpa[n];
    for (i = 0; i < n; i++)
    {
        printf(" %d. Enter student name- ", i + 1);
        scanf("%s", &s[i].name);
        for (j = 0; j < 5; j++)
        {
            printf(" Enter CGPA (0-10) in sem %d- ", j + 1);
            scanf("%lf", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        sum[i] = 0;
        for (j = 0; j < 5; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
        cgpa[i] = (double)sum[i] / 5.0;
        if (cgpa[i] >= 8)
        {
            eligible(cgpa[i], s, i);
        }
        else
        {
            not_eligible(cgpa[i], s, i);
        }
    }
    return 0;
}