#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vii vector<vector<int>>


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
	
			int x;
			cin>>x;
			if(1<=x && x<100)
			{
				cout<<"Easy"<<endl;
			}
			else if(100<=x && x<200)
			{
				cout<<"Medium"<<endl;
			}
			else if(200<=x && x<=300)
			{
				cout<<"Hard"<<endl;
			}
		}
	return 0;

}