#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,k;
		int count = 0;
		cin>>n>>k;

		while(n--){
			int x;
			cin>>x;
			x += k;

			if(x%7==0){
				count++;
			}
		}

		cout<<count<<endl;
	}
	return 0;
}