#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,p;
    int *np; char *mp;  float *pp;

     printf("Enter the size you want to decide for int  -:");
     scanf("%d",&n);
     np= (int*) malloc(n*sizeof(int));

    
    printf("Enter the size you want to decide for char -:");
    scanf("%d",&m);
    mp= (char*) malloc(m*sizeof(char));    
    
    printf("Enter the size you want to decide for float-:");
    scanf("%d",&p);
    pp= (float *) malloc(p*sizeof(float));
    free(np);free(mp); free(pp);

    return 0;
}