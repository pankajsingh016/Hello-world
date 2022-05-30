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

	string g,h;
	cin>>g>>h;
	string gh;
	cin>>gh;

	int ar[26]={0};
	int br[26]={0};

	for(int i=0;i<g.size();i++)
	{
		ar[g[i]-'A']++;
	}

	for(int i=0;i<h.size();i++)
	{
		ar[h[i]-'A']++;
	}

	for(int i=0;i<gh.size();i++)
	{
		br[gh[i]-'A']++;
	}

	bool r = true;
	for(int i=0;i<26;i++)
	{
		if(ar[i]!=br[i])
		{
			r=false;
		}
	}


	if(r)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;

}