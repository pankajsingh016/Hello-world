#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>


bool checkGMI(int positive,int negative){

    if(positive==0 || negative == 0)
        return false;

    int pp = positive/2;
    int rp = positive%2;
    int np = negative/2;
    int rn = negative%2;
    int spaces;

    if(pp==np)
    {
        return true;
    }

    if(pp > np)
    {
        spaces = np+1;
        if(rp!=1 && spaces == pp){
            return true;
        }
        else{
            return false;
        }

    }

    else if(np > pp)
    {
        spaces = pp+1;
        if(rn!=1 && spaces==np){
            return true;
        }else{
            return false;
        }
    }

    cout<<"No ONe"<<endl;
    return false;

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


    int t;
    cin>>t;
    while(t--)
        {
            int nin;
            cin>>nin;

            vi arr(nin);
            int p  = 0;
            int n  = 0;
            for(int i=0;i<nin;i++)
            {
                cin>>arr[i];
                if(arr[i]==1)
                {
                    p++;
                }
                else{
                    n++;
                }
            }

            bool truth = checkGMI(p,n);

            if(truth)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    return 0;

}