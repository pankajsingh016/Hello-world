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


	ll t;
	cin>>t;
	while(t--)
		{
			ll n;
			cin>>n;

			if(n==1)
			{
				ll m;
				cin>>m;
				cout<<m<<"\n";
			}
			else{

				vector<ll>A;
				for(ll i=0;i<n;i++)
				{
					ll x;
					cin>>x;
					A.push_back(x);
				}
				
				sort(A.begin(),A.end());
				double sumL = 0.0;
				double sumR = 0.0;

				for (auto i:A)
				{
					sumR = sumR +i;
				}

				double maxMean  = 0.0;
				for(ll i=0;i<n;i++)
				{
					sumL = sumL+A[i];
					sumR = sumR-A[i];

					double ls = sumL/(i+1);
					double rs = sumR/(n-i-1);

					if(maxMean <(ls+rs)){
						maxMean = (ls+rs);
					}
				}
				std::cout<<std::fixed<<std::setprecision(6)<<maxMean<<"\n";
			}

		}
	return 0;

}