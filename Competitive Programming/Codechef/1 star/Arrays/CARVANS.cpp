#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>


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


    int t;
    cin>>t;
    while(t--)
        {
    
            int n;
            cin>>n;
            int cwms = 0;
            vi arr(n);
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }

            if(n==1)
            {
                cwms = 1;
                cout<<cwms<<endl;
                continue;
            }

            for(int i=0;i<n;i++)
            {
                if(i==0)
                {
                    cwms += 1;
                }

                else if (arr[i-1] > arr[i])
                {
                    cwms += 1;
                }

            }

            cout<<cwms<<endl;

        }
    return 0;

}