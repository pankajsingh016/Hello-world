#include<bits/stdc++.h>
using namespace std;

#define ll long long


int parity(int x){
	return x%2;
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
			int n;
			cin>>n;

			vector<int>ar;
			vector<int>rec;
			int count = 0;

			for(int i=0;i<n;i++)
			{
				cin>>ar[i];
			}
			bool mark = true;
			for(int i=0;i<n-1;)
			{
				if(ar[i]==0 && ar[i+1]==0)
				{
					cout<<"-1"<<endl;
					mark = false;
					break;
				}

				if(parity(ar[i] & ar[i+1])!=parity(ar[i] | ar[i+1]))
				{
					ar[i] = ar[i] ^ ar[i+1];
					count++;
					rec.push_back(i);
					rec.push_back(i+1);
				}
			}

			if(mark)
			{
				cout<<count<<endl;
				for(int i=0;i<n;)
				{
					cout<<rec[i]<<" "<<rec[i+1]<<endl;
					i=i+2;
				}
			}



		}
	return 0;

}