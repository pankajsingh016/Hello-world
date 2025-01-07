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

	int ar[n];
	int total = 0;

	for(int i=0;i<n;i++)
	{	
		cin>>ar[i];
		total = total + ar[i];
	}

	int r = total % (n+1);
	int fin = 0;

	for(int i=1;i<=5;i++){
		
		if((total+i)%(n+1)!=1){
			fin++;
		}
	}

	cout<<fin<<endl;

	return 0;

}