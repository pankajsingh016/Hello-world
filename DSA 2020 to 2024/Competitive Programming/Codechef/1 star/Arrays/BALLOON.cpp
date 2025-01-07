#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>

bool checktill(vi arr,int i)
{
	int count = 0;
	for(int j=0;j<=i;j++)
	{
		if(arr[j]>=1 && arr[j]<=7)
			count++;
	}

	if(count==7)
	{
		return true;
	}
	else{
		return false;
	}
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
			int n;
			cin>>n;

			vi arr(n);
			for(int i=0;i<n;i++)
			{
				cin>>arr[i];
			}

			for(int i=0;i<n;i++)
			{
				if(checktill(arr,i))
				{
					cout<<(i+1)<<endl; 
					break;
				}
			}

		}
	return 0;

}