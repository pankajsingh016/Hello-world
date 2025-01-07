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
    freopen("/media/pankajsingh/workbench/Git/Hello-world/Competitive Programming/input.txt","r",stdin);
    freopen("/media/pankajsingh/workbench/Git/Hello-world/Competitive Programming/output.txt","w",stdout);

    #else
    // online submission
    #endif


    int t;
    cin>>t;
    while(t--)
        {
            lld a,b;
            cin>>a>>b;

            lld gap = b-a;
            lld m = gap%3;

            if(gap<0)
            {
                cout<<"No"<<endl;
            }
            else if(m==0||m==1)
            {
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }

        }
    return 0;

}