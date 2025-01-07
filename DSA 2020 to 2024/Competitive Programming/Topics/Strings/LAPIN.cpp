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
			string s;
			cin>>s;

			int L[26]={0};
			int R[26]={0};

			int a = s.size();

			//left count
			for(int i=0;i<a/2;i++)
			{
				L[s[i]-97]++;
			}

			//right count
			if(a%2==0)
				{
					R[s[a/2]-97]++;
				}

			for(int i=(a/2)+1;i<a;i++)
			{
				R[s[i]-97]++;

			}

			bool lap = true;
			for(int i=0;i<26;i++)
			{
				if(L[i]!=R[i])
				{
					lap = false;
					break;
				}
			}

			if(lap){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}

			s.clear();

		}
	return 0;

}