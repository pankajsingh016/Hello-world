#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll n, ll d)
{
	ll infected = 1;

	for(int i=1;i<=d;i++)
	{
		if(i<=10)
			{
				infected = infected*2;
				if(infected > n){
					infected = n;
					return n;
				}
			}
		
		else{
			infected = infected * 3;
			if(infected > n)
			{
				infected = n;
				return n;
			}
		}
	}

	return infected;
}

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);

	ll t;
	cin >> t;

	while (t--)
	{
		ll n, d;
		cin >> n;
		cin >> d;
		ll r = solve(n, d);
		cout << r << endl;
	}
	return 0;
}