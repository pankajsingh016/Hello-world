#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n;
	cin>>n;
	ll count = 0;
	while(n!=0)
	{
		if(n%10==7||n%10==4)
		{
			count++;
		}
		n =  n/10;
	}
	if(count==7||count==4)
	{
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;

}