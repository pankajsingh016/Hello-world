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


	int n;
	string s;
	cin>>n;
	cin>>s;
	int removal = 0;	
	for(int i=1;i<n;i++)
		{
			if(s[i-1]==s[i])
			{
				removal++;
			}	
		}
		cout<<removal<<endl;

	return 0;

}