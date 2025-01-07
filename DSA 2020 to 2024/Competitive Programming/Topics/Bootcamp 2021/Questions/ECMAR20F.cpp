#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;

	while(t--)
	{
		int f,s;
		cin>>f>>s;

		string item;
		cin>>item;
		
		set <int> fm;

		for(int i=0; i< item.size();i++)
		{
			fm.insert(item[i]);
		}

		int afterfill = fm.size();
		int boredom = s - afterfill;

		if(fm.size() >= s){
			cout<<"0"<<endl;
		}
		
		else{
			cout<<boredom<<endl;
		}
	}
	return 0;

}