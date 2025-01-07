#include<iostream>
using namespace std;

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

	int problems = 0;
	for(int i=0;i<n;i++)
	{
		int p,v,t;
		cin>>p>>v>>t;

		if((p+v+t)>=2){
			problems++;
		}	
	}

	cout<<problems<<endl;

	return 0;
}