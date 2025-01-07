#include<bits/stdc++.h>
using namespace std;

#define ll long long





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
			int n,k;
			cin>>n>>k;

			vector<int>ai(n);
			vector<int>bi(n);

			for(int i=0;i<n;i++)
				cin>>ai[i];
			
			for(int i=0;i<n;i++)
				cin>>bi[i];

			vector<pair<int,int>> ab;
			for(int i=0;i<n;i++)
			{
				ab.push_back(make_pair(ai[i],bi[i]));
			}

			sort(ab.begin(),ab.end());

			for(int i=0;i<n;i++)
			{
				if(k>=ab[i].first){
					k = k+ab[i].second;
				}
				else{
					break;
				}
			}

			cout<<k<<"\n";
		}
	return 0;

}