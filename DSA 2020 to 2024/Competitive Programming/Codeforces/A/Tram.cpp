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


	int stops;
	cin>>stops;
	int people = 0;
	int max = 0;

	for(int i=1;i<=stops;i++)
	{
		int a,b;
		cin>>a>>b;

		people = people + (b-a);
		if(max < people)
		{
			max = people;
		}

	}
	cout<<max<<endl;
	return 0;

}