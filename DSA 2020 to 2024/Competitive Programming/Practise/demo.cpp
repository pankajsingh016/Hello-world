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

	int a,b,c;
	cin>>a>>b>>c;
	string s;
	cin>>s;
	cout<<(a+b+c)<<" "<<s<<endl;
	return 0;

}