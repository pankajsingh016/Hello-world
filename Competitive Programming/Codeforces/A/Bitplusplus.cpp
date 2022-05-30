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


	int t;
	cin>>t;

	int x = 0;

	for(int i=0;i<t;i++)
	{
		string s;
		cin>>s;

		if(s[0]=='+'||s[1]=='+'||s[2]=='+'){
			x += 1;
		}
		else{
			x -= 1;
		}
	}

	cout<<x<<endl;
	
	return 0;

}