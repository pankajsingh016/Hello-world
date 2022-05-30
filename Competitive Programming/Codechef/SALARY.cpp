#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
   
    while(t--)
    {
        int n;
        cin>>n;
      
        int ar[n];
       
        int sum = 0;
        int min;
        
        cin>>ar[0];
        min = ar[0];
        sum = ar[0];
        
        for(int i=1;i<n;i++)
        {
            cin>>ar[i];

            if(min > ar[i]){
                min = ar[i];
            }
            sum = sum + ar[i];    
        }

        int ans = sum - (n*min);
        cout<<ans<<endl;
    }
    return 0;
}
