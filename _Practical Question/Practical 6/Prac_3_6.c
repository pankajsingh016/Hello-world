#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter the Number of Friends\n");
    scanf("%d",&n);
    
    char ar[n][20];
    
    for(int i=0;i<n;i++)
    { 
       printf("Enter the Name of your Friends\n");
       scanf("%s",&ar[i][0]);

    }

    fflush(stdin);
    char c;
    printf("*************************************************\n");
    printf("Enter the Name of the Friend to search for\n");
    scanf("%c",&c);

    printf("Your Friends with letter %c are-:\n",c);
    
    for(int i=0;i<n;i++)
    {    if(c==ar[i][0])
          {printf("%s \n",ar[i]);
          }
    }
    
    return 0;
}