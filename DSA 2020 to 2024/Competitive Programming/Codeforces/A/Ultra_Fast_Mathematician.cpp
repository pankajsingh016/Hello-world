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

	string n,m;
	cin>>n>>m;
	string ans="";
	for(int i=0;i<n.size();i++)
	{
		if(m[i]=='0' && n[i]=='1')
			ans += "1";
		else if(m[i]=='1' && n[i]=='0')
			ans+= "1";
		else
			ans += "0";
	}
	cout<<ans<<endl;

}