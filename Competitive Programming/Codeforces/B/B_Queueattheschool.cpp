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
	int t;

	cin>>n;
	cin>>t;

	string s;
	cin>>s;

	while(t--){
		
		for(int i=0;i<n-1;i++)
		{
			if(s[i]=='B' && s[i+1]=='G'){
				swap(s[i],s[i+1]);
				i++;
			}
		}
	}

	cout<<s;

}