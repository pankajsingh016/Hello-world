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
		int x1,x2,x3,x4;
		cin>>x1>>x2>>x3>>x4;
		//R1 - (x1,x2)
		//R2 = (x3,x4)

		if(x1 == x3){
			cout<<"Yes"<<endl;
		}

		else if(x2 == x4){
			cout<<"Yes"<<endl;
		}

		else{
			cout<<"No"<<endl;
		}
		
	}
	return 0;

}