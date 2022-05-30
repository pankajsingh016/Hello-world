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
	
	
	string p;
	cin>>p;

	for(int i=0;i<p.size();i++)
	{
		if(p[i]=='H'||p[i]=='Q'||p[i]=='9'){
			cout<<"YES"<<endl;
			return 0;
		}
		
	}
	cout<<"NO"<<endl;
	return 0;

}