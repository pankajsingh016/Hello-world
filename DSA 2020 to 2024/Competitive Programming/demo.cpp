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
	freopen("/media/pankajsingh/workbench/C,C++/The Dead Promise/input.txt","r",stdin);
	freopen("/media/pankajsingh/workbench/C,C++/The Dead Promise/output.txt","w",stdout);

	#else
	// online submission
	#endif


	int t;
	cin>>t;

	while(t--)
	{
		int n,k;
		cin>>n>>k;

		vi arr(n);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}

	cout<<"He"<<endl;
	return 0;

}