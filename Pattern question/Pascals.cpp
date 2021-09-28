//Pascals Triangle
/*
      1
    1 2 1
   1 3 3 1
  1 4 6 4 1
*/
#include <iostream>
#include <conio.h>

int facto(int k)
{
    int fact =1;
    for(int i=1;i<=k;i++)
    {
        fact =fact*i;
    }
    return fact;
}



int ncr(int i,int j)
{
             int ncr = facto(i)/(facto(i-j)*facto(j));
             return ncr;
}


int main()
{
    int n;
    
    std::cout<<"Enter Rows-:";
    std::cin>>n;
    
    for(int i=0;i<n;i++)
    {
        for(int m=n;m-i>0;m--)
        {
            std::cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
               std::cout<<ncr(i,j)<<" ";     
        }
        std::cout<<"\n";
    }
}