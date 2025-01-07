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
			int x;
			cin>>x;
			int y = x%4;
			if(y==1)
			{
				cout<<"East\n";
			} else if(y==2){
				cout<<"South\n";
			} else if(y==3){
				cout<<"West\n";
			} else if(y==0){
				cout<<"North\n";
			} else{
				cout<<"Not Valid\n";
			}

		}
	return 0;

}