#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin>>T;

	while(T--)
	{
		string s;
		cin>>s;	

		int a = 0;
		for(int i=0;i<s.length();i++)
		{
			a = s[i]^a;
		}

		if(a==0)
		{
			cout<<"-1"<<endl;
		}
		else{
			char c = a;
			cout<<c<<endl;
		}
	}
	return 0;

}