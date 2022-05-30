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
			int a,b,c,d,k;
			cin>>a>>b>>c>>d>>k;

			int sum = abs(b-a) + abs(d-c);

			if(sum == k)
			{
				cout<<"YES"<<endl;
			}

			else if(sum < k)
			{
				if(k%2 == sum%2)
				{
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}

			else{
				cout<<"NO"<<endl;
			}

		}
	return 0;

}