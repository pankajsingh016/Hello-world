#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("E:\\The Dead Promise\\input.txt", "r", stdin);
	freopen("E:\\The Dead Promise\\output.txt", "w", stdout);

#else
// online submission
#endif

	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		for(int i=0;i<s.length();i++)
		{
			if(s.substr(i,5)=="party")
			{
				s[i+2] = 'w';
				s[i+3] = 'r';
				s[i+4] = 'i';
			}
		}
		cout<<s<<endl;
	}
	return 0;
}