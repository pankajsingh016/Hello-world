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
		int n;
		cin>>n;
		vector<int> s;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			s.push_back(x);
		}		
		sort(s.begin(),s.end());

		int ans = s[0]+s[1];
		cout<<ans<<endl;
	}
	return 0;

}