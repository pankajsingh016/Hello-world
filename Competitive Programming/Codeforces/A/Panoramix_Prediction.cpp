#include<bits/stdc++.h>
using namespace std;

#define ll long long


int nextPrime(int n,int m)
{
	int i = n+1;
	bool find = false;
	int count = 0;
	while(i<=m)
	{
		count = 0;
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
				count++;
		}

		if(!count)
			return i;

		i++;
	}

	return -1;
}


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


	int n,m;
	cin>>n>>m;

	int k=nextPrime(n,m);
	if(k==m)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;

}