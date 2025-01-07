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
		string s;
		cin>>s;

		int i=0;
		for(;i<s.size()-1;i++)
		{
			if(s[i]=='1'&&s[i+1]=='0')
			{
				cout<<"Yes\n";
				break;
			}

			else if(s[i]=='1' && s[i+1]=='1')
			{
				cout<<"Yes\n";
				break;
			}
		}

		if(i>=s.size()-1)
		{
			cout<<"No\n";
		}
		
	}
	return 0;

}