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
			int a,b,a1,b1,a2,b2;
			cin>>a>>b>>a1>>b1>>a2>>b2;
			vi l = {a,b};
			vi l1 = {a1,b1};
			vi l2 = {a2,b2};
			sort(l.begin(),l.end());
			sort(l1.begin(),l1.end());
			sort(l2.begin(),l2.end());
			int c1,c2;
			c1 = 0;
			c2 = 0;
			for(int i=0;i<l.size();i++)
			{
				if(l[i]==l1[i])
				{
					c1++;
				}
				else if(l[i]==l2[i]){
					c2++;
				}
			}
			if(c1==2)
			{
				cout<<"1"<<endl;
			}
			else if(c2==2)
			{
				cout<<"2"<<endl;
			}
			else{
				cout<<"0"<<endl;
			}


		}
	return 0;

}