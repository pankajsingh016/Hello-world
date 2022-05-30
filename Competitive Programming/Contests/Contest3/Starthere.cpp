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
		ll N,M;
		cin>>N>>M;

		if(M%N==0){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}

	}
	return 0;

}