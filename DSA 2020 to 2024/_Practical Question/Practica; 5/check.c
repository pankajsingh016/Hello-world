#include<stdio.h>
int main()
{
   /* unsigned x;
    printf("enter some value -:");
    scanf("%d",&x);
    printf("%d",x);
    fflush(stdin);
    printf("enter second value-:");
    scanf("%c",&x);
    printf("%c",x);
    */
   char ar[8];
   printf("Enter char -:");
   fgets(ar,8,stdin);
   printf("The Array is %s",ar);
}