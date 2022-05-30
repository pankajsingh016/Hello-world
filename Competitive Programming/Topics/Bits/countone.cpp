#include<bits/stdc++.h>
using namespace std;

#define ll long long

int countone(int x)
{
	// if(x==0){
	// 	return 0;
	// }
	// else{
	// 	return (x&1)+(countone(x>>1));
	// }

	int setbit = 0;
	while(x!=0)
	{
		setbit = setbit + (x&1);
		x = x>>1;
	}

	return setbit;
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


	int t;
	cin>>t;
	while(t--)
		{
			int k;
			cin>>k;
			cout<<countone(k)<<endl;
		}
	return 0;

}