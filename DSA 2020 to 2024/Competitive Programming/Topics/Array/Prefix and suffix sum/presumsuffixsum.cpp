#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void PrefixSum(vector<int>arr)
{
    vector<int> prefix;
    int sum = 0;
    for(int i=0;i<arr.size();i++)
    {
        prefix.push_back(sum+arr[i]);
        sum += arr[i];
    }

    cout<<"Prefix Sum: ";
    for(auto i:prefix)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

void SuffixSum(vector<int>arr)
{
    vector<int> suffix;
    stack<int> temp;
    int sum = 0;

    for(int i=arr.size();i>=0;i--)
    {
        temp.push(arr[i]+sum);
        sum += arr[i];
    }

    for(int i=0;i<arr.size();i++)
    {
        suffix.push_back(temp.top());
        temp.pop();
    }

    cout<<"Suffix Sum :";
    for(auto i:suffix){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{

    freopen("/media/pankajsingh/workbench/C,C++/The Dead Promise/input.txt","r",stdin);
    freopen("/media/pankajsingh/workbench/C,C++/The Dead Promise/output.txt","w",stdout);

    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<10;i++)
        cin>>arr[i];

    PrefixSum(arr);
    cout<<endl;
    SuffixSum(arr);

    return 0;
}

