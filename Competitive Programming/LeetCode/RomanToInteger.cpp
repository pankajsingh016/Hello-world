#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findex(vector<pair<char,int>>x,char z)
{
	int s = x.size();

	for(int i=0;i<s;i++)
	{
		if(z==x[i].first)
		{
			return x[i].second;
		}
	}
	return 0;
}

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

	string s;
	cin >> s;

	vector<pair<char, int>> symbols;
	symbols.push_back(make_pair('I', 1));
	symbols.push_back(make_pair('V', 5));
	symbols.push_back(make_pair('X', 10));
	symbols.push_back(make_pair('L', 50));
	symbols.push_back(make_pair('C', 100));
	symbols.push_back(make_pair('D', 500));
	symbols.push_back(make_pair('M', 1000));

	int number = 0;

	for (int i = 0; i < s.size();)
	{
		if(s[i]=='I'&&(s[i+1]=='V'||s[i+1]=='X')){
			//do something;
			number = number + ((findex(symbols,s[i+1]))-(findex(symbols,s[i])));
			i+=2;
		}
		else if(s[i]=='X'&&(s[i+1]=='L'||s[i+1]=='C')){
			//do something;
			number = number + ((findex(symbols,s[i+1]))-(findex(symbols,s[i])));
			i+=2;
		}
		else if(s[i]=='C'&&(s[i+1]=='D'||s[i+1]=='M')){
			//do something;
			number = number + ((findex(symbols,s[i+1]))-(findex(symbols,s[i])));
			i+=2;
		}
		else{
			number = number + findex(symbols,s[i]);
			i+=1;
		}
	
	}
		cout<<number<<endl;
	return 0;
}