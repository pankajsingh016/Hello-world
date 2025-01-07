#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>

bool holytriplet(vector<pair<ll, ll>> arr, int i, int j, int k)
{
    int area = 0.5 * ((arr[i].first * (arr[j].second) - arr[k].second) + arr[j].first * (arr[k].second - arr[i].second) + arr[k].first * (arr[i].second - arr[j].second));
    bool antipodal = false;

    /*
        i,j
        j,k
        i,k
    */

    // i,j
    int x = (arr[i].first + arr[j].first) / 2;
    int y = (arr[i].second + arr[j].second) / 2;

    if (x == 0 && y == 0)
        antipodal = true;

    // j,k
    if (!antipodal)
    {
        x = (arr[j].first + arr[k].first) / 2;
        y = (arr[j].second + arr[k].second) / 2;

        if (x == 0 && y == 0)
        {
            antipodal = true;
        }
    }
    // i,k
    if (!antipodal)
    {
        x = (arr[i].first + arr[k].first) / 2;
        y = (arr[i].second + arr[k].second) / 2;

        if (x == 0 && y == 0)
        {
            antipodal = true;
        }
    }

    if (area != 0 && antipodal)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("/media/pankajsingh/workbench/C,C++/The Dead Promise/input.txt", "r", stdin);
    freopen("/media/pankajsingh/workbench/C,C++/The Dead Promise/output.txt", "w", stdout);

#else
// online submission
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<ll, ll>> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first;
            cin >> arr[i].second;
        }

        int counter = 0;

        vector<pair<ll, ll>> temp(n * n);

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         for(int k=j+1;k<n;k++)
        //         {
        //             if(i==j || j==k || i==k)
        //                 continue;

        //             if(i<j && j<k)
        //                 {

        //                     if(holytriplet(arr,i,j,k)){
        //                     cout<<"("<<i<<","<<j<<","<<k<<")"<<endl;
        //                     counter ++;

        //                     }

        //                 }
        //         }
        //     }
        // }

        int m = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                if (i < j)
                {
                    temp[m].first = i;
                    temp[m].second = j;
                    m++;
                }
            }
        }

        for(int i=0;i<n*n;i++)
        {
            for(int j=temp[i].second+1;j<n;j++)
            {
                if(holytriplet(arr,temp[i].first,temp[i].second,j)){
                    //   cout<<"("<<temp[i].first<<","<<temp[i].second<<","<<j<<")"<<endl;
                      counter++;
                           
                }
            }
        }


        cout << counter << endl;
    }
    return 0;
}

/*
(0,1,2)
(0,1,3)
(0,2,3)
(1,2,3)
4
*/