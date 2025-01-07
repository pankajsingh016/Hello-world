#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;

	while(t--)
	{
		ll n;
		cin>>n;
		
		if(n==0)
		{
			cout<<"0"<<endl;
		}

		else{
			n = n - 1;
			ll k = 0;
			for(ll i = 1; i*i < n; i++)
			{
				if(n%i==0)
				{
					k += 2;
				}
			}

			if ( pow((ll)sqrt(n),2) == n)
			{
				k++;
			}
			cout<<k<<endl;
		}


	}
	return 0;

}