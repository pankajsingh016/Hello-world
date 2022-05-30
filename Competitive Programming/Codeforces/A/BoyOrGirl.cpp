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


	int ar[26]={0};
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		ar[(s[i]-'a')]++;
	}

	int count = 0;
	for(int i=0;i<26;i++)
	{
		if(ar[i])
		{
			count++;
		}
	}

	if(count%2==1)
		{
			cout<<"IGNORE HIM!"<<endl;
		}
	else{
		cout<<"CHAT WITH HER!"<<endl;
	}
	return 0;

}