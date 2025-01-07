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

	string s;
	cin>>s;
	ll count = 0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='4'||s[i]=='7')
			count++;
	}

	if(count==4 || count==7)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;	


	return 0;

}