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
	freopen("E:\\The Dead Promise\\input.txt","r",stdin);
	freopen("E:\\The Dead Promise\\output.txt","w",stdout);

	#else
	// online submission
	#endif


	int t;
	cin>>t;
	while(t--)
		{
			int n;
			cin>>n;

			vi arr(n);
			int maximum = INT_MIN;
			int moves = 0;

			for(int i=0;i<n;i++)
			{
				cin>>arr[i];
				if(arr[i] > maximum)
				{
					maximum = arr[i];
				}
			}
			
			for(int i=0;i<n;i++)
			{
				moves = max(moves,maximum - arr[i]);
			}


			cout<<moves<<endl;

		}
	return 0;

}