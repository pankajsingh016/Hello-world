#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>


void sort(vector<int>&s);
// void solve();
// void marker(int from,int to,vector<bool>&a)
// {
//     if(from < 0)
//         from = 1;
    
//     if(to > 100)
//         to = 100;

//     for(int i=from;i<=to;i++)
//         a[i] = true;
// }

void sort(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(v[i] > v[j])
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}


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
        int M,x,y;

        cin>>M>>x>>y;
        
        vector<int> arr(M);

        for(int i=0;i<M;i++)
        {
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());

        int step = x*y;
        int safe = arr[0]-step-1;

        if(safe < 1) safe = 0;

        for(int i=1;i<M;i++)
        {
            int min = arr[i]-step-1;
            int lmax = arr[i-1]+step;

            if(lmax < min)
            {
                safe += min - lmax;
            }
        }

        int max = arr[M-1] + step;

        if(max < 100)
        {
            safe += 100 - max;
        }

        cout<<safe<<endl;
    }

    // int t;
    // cin>>t;
    // while(t--)
    //     {
    //         int m,x,y;
    //         cin>>m>>x>>y;

    //         vector<int>hno(m);
    //         for(int i=0;i<m;i++)
    //         {
    //             cin>>hno[i];
    //         }

    //         int range = x*y;
    //         vector<bool>mark(101,false);

    //         for(int i=0;i<m;i++)
    //         {
    //             int from = hno[i] - range-1;
    //             int to  = hno[i] + range-1;
    //             marker(from,to,mark);
    //         }
    //         int cnt = 0;
    //         for(int i=1;i<100;i++)
    //         {
    //             if(mark[i]==false)
    //                 cnt++;
    //         }

    //         cout<<cnt<<endl;

    //     }
    return 0;

}




// void solve()
// {
//     //new solution

//     int t;
//     cin>>t;

//     while(t--)
//     {
//         int M,x,y;

//         cin>>M>>x>>y;
        
//         vector<int> arr;

//         for(int i=0;i<M;i++)
//         {
//             cin>>arr[i];
//         }

//         sort(arr);

//         int step = x*y;
//         int safe = arr[0]-step;

//         if(safe < 0) safe = 0;

//         for(int i=1;i<M;i++)
//         {
//             int min = arr[i]-step;
//             int lmax = arr[i-1]+step;

//             if(lmax < min)
//             {
//                 safe += min - lmax;
//             }
//         }

//         cout<<safe<<endl;
//     }

// }