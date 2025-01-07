//Problem statement -> Given an array of Number. Find a Number t given such that if it is present 
// in the array return the position if not then return the positon where it is expected to be present.
#include<bits/stdc++.h>
using namespace std;

int giveanswer(int start, int end,int t,vector<int> arr)
{   

    int mid,ans;
while(start<=end){

    mid = (start+end)/2;
    
    if(arr[mid] == t)
    {
        return mid;
    }

    else if(t < arr[mid])
    {
        end = mid -1;
        ans = mid ;
    }

    else{

        start = mid + 1;
        ans =   mid +1;

    }

    }
    return ans;
}


int main()
{
    int n,t,ins,md;
    cin>>n>>t;
    vector <int> arr;
        for(int i=0;i<n;i++)
        {
                cin>>md;
                arr.push_back(md);
        }

    int start = 0;
    int end = arr.size() - 1;

    int ans = giveanswer(start,end,t,arr);
    cout<<ans;
    return 0;
}