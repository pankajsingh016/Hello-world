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
			int A,B,C;
			cin>>A>>B>>C;

			if(A>50)
			{
				cout<<"A\n";
			}
			else if(B>50)
			{
				cout<<"B\n";
			}
			else if(C>50)
			{
				cout<<"C\n";
			}
			else
			{
				cout<<"NOTA\n";
			}
		}
	return 0;

}