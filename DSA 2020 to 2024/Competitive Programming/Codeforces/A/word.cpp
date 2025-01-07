#include<bits/stdc++.h>
using namespace std;


string changeUp(string s){
	
	for(int i=0;i<s.size();i++){
		
		if(s[i]>96){
			s[i] = s[i] - 32;
		}
	}
	return s;
}

string changeLo(string s){
	
	for(int i=0;i<s.size();i++){
		
		if(s[i]<96){
			s[i] = s[i] + 32;
		}
	}
	return s;
}

int Lcount(string s){

	int lc = 0;
	for(int i=0;i<=s.size();i++)
	{
		if(s[i]>96){
			lc++;
		}
	}
	return lc;
}

int main()
{
	string s;
	cin>>s;

	int lc = Lcount(s);
	int uc = s.size() - lc;

	if(lc>=uc){
		cout<<changeLo(s)<<endl;
	}
	else{
		cout<<changeUp(s)<<endl;
	}
	return 0;
}