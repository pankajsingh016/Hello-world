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
		double t1,t2,r1,r2;
		cin>>t1>>t2>>r1>>r2;

		double a = (t1*t1)/(r1*r1*r1);
		double b = (t2*t2)/(r2*r2*r2);

		if(a!=b)
		{
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
	}
	return 0;

}