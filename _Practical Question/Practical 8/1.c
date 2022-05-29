#include<stdio.h>
int main()
{
    int ar[5];
    int hold;
    int *ptr=ar;
    for(int i=0;i<5;i++)
    {
        printf("Enter the Element ar[%d]-:",i);
        scanf("%d",ptr);
        ptr++;
    }
    ptr--;
    printf("Array in Reverse Order-:\n");
    for(int i=0;i<5;i++)
    {
        printf("Value -%d ,Address -%p , Index -%d \n",*ptr,ptr,i);
        ptr--;
    }

    return 0;
}