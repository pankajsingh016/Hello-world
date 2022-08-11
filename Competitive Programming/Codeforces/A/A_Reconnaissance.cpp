#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>



int main()
{

    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("/media/pankajsingh/workbench/Git/Hello-world/input.txt","r",stdin);
    // freopen("/media/pankajsingh/workbench/Git/Hello-world/output.txt","w",stdout);

    // #else
    // // online submission
    // #endif

    int n;
    cin>>n;


    vi circ(n);
    int min = INT_MAX;
    int ar[2];

    for(int i=0;i<n;i++)
    {
        cin>>circ[i];
    }

    for(int i=0;i<circ.size()-1;i++)
    {
        if(abs(circ[i] - circ[i+1]) < min)
        {
            min = abs(circ[i] - circ[i+1]);
            ar[1] = i+1;
            ar[0] = i;
        }
    }


    if(abs(circ[0] - circ[circ.size()-1]) < min)
    {
        ar[0] = circ.size()-1;
        ar[1] = 0;
        min = abs(circ[0] - circ[circ.size()-1]);
    }

    cout<<(ar[0]+1)<<" "<<(ar[1]+1)<<endl;
    
    return 0;

}