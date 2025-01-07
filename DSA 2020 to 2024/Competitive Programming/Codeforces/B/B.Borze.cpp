#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin>>s;

	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='-' && s[i+1]=='.'){
			cout<<"1";
			i++;
		}
		else if(s[i]=='-' && s[i+1] =='-'){
			cout<<"2";
			i++;
		}
		else{
			cout<<"0";
		}
	}
	return 0;

}