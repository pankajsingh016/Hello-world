#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;

	while(t--)
	{
		int M,x,y;
		cin>>M>>x>>y;
		int hwc[101]={0};
		int cover = x*y;

		for(int i=0;i<M;i++)
		{
			int a;
			cin>>a;
			hwc[a] = 1;
			//right cover
			for(int j=a;j<=(a+cover);j++)
				{ 
					
					if(j<=100){
						hwc[j] = 1;
					}else{
						break;
					}
					
				}
			//left cover
			for(int j=a;j>= (a-cover);j--)
			{
				if(j>=1)
				{
					hwc[j] = 1;
				}
				else{
					break;
				}
			}
	}
			int count = 0;
			for(int i=1;i<=100;i++)
			{
				if(hwc[i]==0)
				{
					count++;
				}
			}
	cout<<count<<endl;

}
	return 0;

}