#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	int mat[5][5];
	int x,y;
	for(int i=0;i<5;i++ )
	{
		for(int j=0;j<5;j++)
		{
			cin>>mat[i][j];
			if(mat[i][j]==1){
				x=i;
				y=j;
			}
		}
	}

	//mid will be at 2,2
	int step = 0;
	if(x>2){
		step = step + (x-2);
	}else{
		step = step + (2-x);
	}

	if(y>2){
		step = step + (y-2);
	}else{
		step = step + (2-y);
	}
	
	cout<<step<<endl;
	return 0;

}