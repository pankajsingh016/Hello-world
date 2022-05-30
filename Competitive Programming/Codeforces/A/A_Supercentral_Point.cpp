#include<bits/stdc++.h>

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>

using namespace std;

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
    vector<pair<int,int>> arr;
    int count = 0;    
    while(t--)
        {
            int x,y;
            cin>>x>>y;
            arr.push_back(make_pair(x,y));
        }

    for(int i=0;i<arr.size();i++)
    {
        int l,r,u,d;
        l=0;r=0;u=0;d=0;
        
        for(int j=0;j<arr.size();j++)
        {
            if(i==j)
                continue;

                if(arr[i].first == arr[j].first)
                {
                    if(arr[i].second < arr[j].second)
                    {
                        u++;
                    }

                    if(arr[i].second > arr[j].second)
                    {
                        d++;
                    }
                }           


                if(arr[i].second == arr[j].second)
                {
                    if(arr[i].first < arr[j].first)
                    {
                        r++;
                    }

                    if(arr[i].first > arr[j].first)
                    {
                        l++;
                    }
                }           
        }

        if(l>0 && r>0 && u>0 && d>0)
            count++;
    }

    std::cout<<count<<endl;
    return 0;

}