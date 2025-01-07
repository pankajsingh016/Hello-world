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
		int n;
		cin>>n;
		int height = 1;

		int d[101];
		for(int i=0;i<n;i++){
			cin>>d[i];
		}

		int dead = 0;
		for(int i=0;i<n;i++)
		{
			if(i==0 && d[i]==1){
				height += 1;
				dead = 0;
			}

			if(i>=1 && d[i]==1)
			{
				dead = 0;
				if(d[i-1]==1){
					height += 5;
				}
				else{
					height +=1;
				}

			}
			
			if(d[i]==0){
				dead+=1;
			}

			if(dead>=2){
				height = -1;
				break;
			}
		}

		cout<<height<<endl;

	}
	return 0;

}