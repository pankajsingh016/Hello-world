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
		int count = 0;
		ll n;
		cin>>n;
		while(n){
			if(n&1 == 0){
				count++;
			}
			n>>1;
		}

		cout<<count<<endl;
	}
	return 0;

}