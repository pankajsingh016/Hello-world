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

	int n;
	cin>>n;
	int x=0;
	int y=0;
	int z=0;
	while(n--)
		{	
			int xi,yi,zi;
			cin>>xi>>yi>>zi;
			x = x + xi;
			y = y + yi;
			z = z + zi;
		}
		if((x==0) &&(y==0) &&(z==0))
		{
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	return 0;

}