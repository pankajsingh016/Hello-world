#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>

void generatecases()
{
    int n = rand()%1000;
    cout<<n<<endl;

    while(n--)
    {
        int s = rand()%100000;
        cout<<s<<endl;
        for(int i=0;i<s;i++)
        {
            cout<<rand()%1000000000<<" ";
        } cout<<endl;
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

    // generatecases();
    int t;
    cin>>t;
    while(t--)
        {
            int n;
            cin>>n;
            vector<ll> arr(n);
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }

            int count = 0;
            for(int i=0;i<n-1;i++)
            {
                if(arr[i]>arr[i+1]){
                    swap(arr[i],arr[i+1]);
                    if(i>=1 && arr[i] < arr[i-1])
                        count = count + 2;
                    else 
                        count = count + 1;
                }

                if(count>=2)
                {
                    break;
                }
            }
            if(count <= 1){
                cout<<"YES "<<endl;
            } else{
                cout<<"NO "<<endl;
            }

        }
    return 0;

}