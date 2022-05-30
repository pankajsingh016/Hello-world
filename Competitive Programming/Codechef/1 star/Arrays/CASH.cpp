#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>



void generateTestCases(){
    
    int t = rand() % 1000  + 1;
    cout<<t<<endl;
    for(int i=0;i<=t;i++)
    {
        int n = rand() % 100000 + 1;
        int k = rand() % 1000000000 + 1;

        cout<<n<<" "<<k<<endl;
        for(int j=0;j<n;j++){
            cout<<(rand()%1000000000 + 0)<<" ";
        }
        cout<<endl;
    }
}


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("/media/pankajsingh/workbench/C,C++/The Dead Promise/input.txt","r",stdin);
    freopen("/media/pankajsingh/workbench/C,C++/The Dead Promise/output.txt","w",stdout);
    

    #else
    // online submission
    #endif

    // generateTestCases();
    int t;
    cin>>t;
    
    while(t--)
        {
            ll n,k,sum;
            sum = 0;
            cin>>n>>k;

            vector<ll> A(n);
            for(int i=0;i<n;i++)
                {
                    cin>>A[i];
                    sum = sum + A[i];
                }            

            if(sum%k==0)
            {
                cout<<0<<endl;
            }
            else{
                
                int r = (sum-A[n-1])%k;
                int x = r%k + A[n-1]%k;
                cout<<(x%k)<<endl;
            }
            // for(int i =0;i< n;i++)
            //     cout<<A[i]<<" ";
            
            // cout<<endl;

        }
    return 0;

}   