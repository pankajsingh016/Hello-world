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
			ll l,r,k;
			cin>>l>>r>>k;

			if(l==r &&(l!=1))
			{
				cout<<"YES\n";
			}
			else if(l==r && l==1)
			{
				cout<<"NO\n";
			}
			
			else {
			

				ll totalOdd = (r-l)/2;
				if(r%2!=0 || l%2!=0) 
					totalOdd++;

				if(k>=totalOdd)
				{
					cout<<"YES\n";
				}
				else{
					cout<<"NO\n";
				}

			}

		}

	return 0;

}