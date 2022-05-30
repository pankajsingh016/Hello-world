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

	string s1;
	string s2;
	cin>>s1>>s2;

	transform(s1.begin(),s1.end(),s1.begin(),::tolower);
	transform(s2.begin(),s2.end(),s2.begin(),::tolower);
	

	int i;
	for(i=0;i<s1.size();i++)
	{
		if(s1[i]==s2[i]){
			continue;
		}
		else if(s1[i]>s2[i]){
			cout<<"1"<<endl;
			break;
		}
		else{
			cout<<"-1"<<endl;
			break;
		}
	}

	if(i==s1.size())
	{
		cout<<"0"<<endl;
	}

		
	return 0;

}