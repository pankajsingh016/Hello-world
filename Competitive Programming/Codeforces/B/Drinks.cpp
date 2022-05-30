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
	
	float sum = 0.0;

	for(int i=0;i<n;i++)	
	{
		int x;
		cin>>x;
		sum = sum + x;
	}

	cout<<std::fixed<<setprecision(9)<<(sum/n)<<endl;

}