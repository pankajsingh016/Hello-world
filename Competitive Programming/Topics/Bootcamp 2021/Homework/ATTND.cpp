#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin>>T;

	while(T--)
	{
		int n;
		cin>>n;
		
		vector<string> name;
		vector<pair<string,string>> l2;
		
		while(n--)
		{
			string s1;
			string s2;
			cin>>s1;
			cin>>s2;
			l2.push_back(make_pair(s1,s2));
			name.push_back(s1);
		
		}

		for(int i=0;i<l2.size();i++)
		{
			int c = count(name.begin(),name.end(),l2[i].first);

			if (c > 1){
				cout<<l2[i].first<<" "<<l2[i].second<<endl;
			}

			else{
				cout<<l2[i].first<<endl;
			}
		}
	}
	return 0;

}