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
	while(t--)
		{
			int n,k;
			cin>>n>>k;

			string s;
			cin>>s;

			int count = 0;

			for(int i=0;i<n/2;i++)
			{
				if(s[i]!=s[n-i-1]){
					count = count + 1;
				}
			}

			if(count <= k){
				if(n%2==1){
					cout<<"YES"<<endl;
				}
				else if((k-count)%2==0){
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}	
			else{
				cout<<"NO"<<endl;
			}
		}
	return 0;

}