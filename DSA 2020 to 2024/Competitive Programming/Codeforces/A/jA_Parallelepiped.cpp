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


    int a,b,c;
    cin>>a>>b>>c;

    int sum = 0;
    sum += sqrt(a*b/c); //b
    sum += sqrt(a*c/b); //a
    sum += sqrt(b*c/a); //c

    cout<<sum*4<<endl;
    return 0;

}