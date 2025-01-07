#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter the Number of Goods-:");
    scanf("%d",&n);
    
    float ar[n];
    float loss;
    float gain1,gai;
    float result,max=0;
    float min=100000000000;
    float sum=0;
    
    printf("\nEnter the Loss in Expensive thing -:");
    scanf("%f",&loss);
    
    printf("\nEnter the Gain in the Least Expensive thing -:");
    scanf("%f",&gain1);
    
    printf("\nEnter the Gain in rest of things -:");
    scanf("%f",&gai);
   
   for(int i=0;i<n;i++)
   {
       printf("\nEnter Good Amount of %d -:",i+1);
       scanf("%f",&ar[i]);
        sum=sum+ar[i];
       if(max<ar[i])
       {
           max=ar[i];
       }
       if (min>ar[i])
       {
           min = ar[i];
       }
    }

    for(int i=0;i<n;i++)
    {
        if(max==ar[i])
        {
            result+=ar[i]-ar[i]*loss;
        }
        else if(min==ar[i])
        {
            result+=ar[i]+ar[i]*gain1;
        }
        else
        {
            result+=ar[i]+ar[i]*gai;
        }
        
    }
     
     if(result>sum)
     {
         printf("The ShopKeeper is in Gain of -: %.2f",result-sum/100);
     }
     else
     {
         printf("The shopkeeper is in Loss of -: %.2f",sum-result/100);
     }
     

    


    return 0;
}