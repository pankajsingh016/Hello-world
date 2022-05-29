#include<stdio.h>
int max_four(int x,int y, int z, int v);

int main()
{
    int a,b,c,d;
    printf("Enter the Four Number\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    int max = max_four(a,b,c,d);
    printf("%d is the Maximum of All\n",max);
    return 0;
}
int max_four(int x,int y, int z, int v)
{
    x = x>y?x:y;
    z = z>v?z:v;
    x = x>z?x:z;
    return x;
}