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
            int n;
            cin>>n;

            string a;
            string b;

            cin>>a;
            cin>>b;

            int freqa[26]={0};
            int freqb[26]={0};
            
            for(int i=0;i < n;i++)
            {    
                freqa[a[i]-'a']+=1;
                freqb[b[i]-'a']+=1;
            }

            int moves = 0;

            for(int i=0;i<26;i++)
            {
                freqa[i] = abs(freqa[i] - freqb[i]);
            }

            for(int i=0;i<26;i++)
            {
                moves += freqa[i];
            }

            cout<<moves<<endl;

        }
    return 0;

}