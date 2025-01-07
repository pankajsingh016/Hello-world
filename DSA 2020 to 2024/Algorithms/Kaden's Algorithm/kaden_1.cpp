/*
     Kaden's Algorithm is used to find the Maximum sub-array sum.

*/

#include<iostream>
using namespace std;

long long maxSubarraySum(int a[],int n)
{
    long long current_sum = 0;
    long long maxSum = 0;

    for(int i=0;i<n;i++) 
    {
        current_sum += a[i];

        if(maxSum < current_sum)
        {
            maxSum = current_sum;
        }

        if(current_sum < 0)
        {
            current_sum = 0;
        }
    }

    return maxSum;
}

int main()
{
    int array[] = {10, 20 ,-30 ,40 ,-50 ,60};

    cout<<maxSubarraySum(array,6)<<endl;

    return 0;
}