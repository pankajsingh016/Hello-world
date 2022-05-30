#include<bits/stdc++.h>
using namespace std;

#define size 100

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int day = 0;
		int ar[size];
		int mark = 1;
		for(int i=0;i<n;i++)
			cin>>ar[i];

		for(int i=0;i<n;i++)
		{
			if(ar[i] >= k)
			{
				if((i+1) != n)
					ar[i+1] += ar[i] - k;
				day += 1;
			}
			else{
				mark = 0;
				day += 1;
				break;
			}
		}

		if(mark){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO "<<day<<endl;
		}
	}
	return 0;
}