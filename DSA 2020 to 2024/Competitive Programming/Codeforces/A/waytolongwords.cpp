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
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;

		int si = s.size();
		if(si<=10){
			cout<<s<<endl;
		}
		else{

			cout<<s[0]<<(si-2)<<s[si-1]<<endl;
		}
		s.clear();
	}
	return 0;

}