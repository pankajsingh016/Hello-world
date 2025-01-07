#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>


bool isk(vi arr,int k)
{
	int l = arr.size();
	sort(arr.begin(),arr.end());
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<l;j++)
		{
			if(i!=j)
			{
				int s = abs(arr[i]-arr[j]);
				if(s == k)
				{
					return true;
				}
			}
		}
	}

	return false;
}


int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("E:\\The Dead Promise\\input.txt","r",stdin);
	freopen("E:\\The Dead Promise\\output.txt","w",stdout);

	#else
	// online submission
	#endif


	int t;
	cin>>t;
	while(t--)
		{
			ll n,k;
			cin>>n>>k;

			vi arr(n);
			for(int i=0;i<n;i++)
			{
				cin>>arr[i];
			}

			if(isk(arr,k))
			{
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
			}

		}
	return 0;

}