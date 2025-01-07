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
			char a[3]={'x','y','z'};
			int N;
			cin>>N;

			string s="";
			for(int i=0;i<N;i++)
			{
				s = s + a[(i%3)];				
			}
			cout<<s<<endl;


		}
	return 0;

}