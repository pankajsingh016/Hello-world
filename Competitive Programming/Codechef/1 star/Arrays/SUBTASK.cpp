// N testcases
// passed all N testcases he get 100 points
// M ( M < N ) test cases he get K (K < 100) points.
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
			int n,m,k;
			cin>>n>>m>>k;

			vi arr(n);
			bool fmt = true;
			bool ant = true;

			for(int i=0;i<n;i++)
			{
				cin>>arr[i];

				if(i<(m))
				{
					if(arr[i]==0)
						fmt = false;
				}
				
				if(arr[i]==0)
				{
					ant = false;
				}
			}

			if(ant)
			{
				cout<<100<<endl;
			}
			else if(fmt)
			{
				cout<<k<<endl;
			}
			else{
				cout<<0<<endl;
			}

		}
	return 0;

}