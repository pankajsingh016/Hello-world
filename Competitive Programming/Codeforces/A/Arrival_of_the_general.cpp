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


	int t;
	cin>>t;
	
	int ar[t];
	int time = 0;
	int max = 0;
	int min = 0;
	int size = sizeof(ar)/sizeof(ar[0]);


	for(int i=0;i<t;i++)
	{
		cin>>ar[i];

		if(ar[i]<=ar[min]){
			min = i;
		}
		if(ar[i]>ar[max]){
			max = i;
		}
	}
	
	time = time + (size-min-1);
	time = time + max;

	if(min < max){
		time = time - 1;
	}

	cout<<time<<endl;
	return 0;

}