#include<bits/stdc++.h>
using namespace std;

#define ll long long


void alter(int a[][3],int i,int j)
{

	if((i+j) == 0 )// for 0,0 point
	{
		a[i][j] = a[i][j] ^ 1;
		a[i][j+1] = a[i][j+1] ^ 1;
		a[i+1][j] = a[i+1][j] ^ 1;
		return;
	}

	if((i+j)==1){ //for position (1,0)
		if(!i){
			a[i][j] = a[i][j] ^ 1;
			a[i][j-1] = a[i][j-1] ^ 1;
			a[i][j+1] = a[i][j+1] ^ 1;
			a[i+1][j] = a[i+1][j] ^ 1;
		}

		else{ //for position (0,1)

			a[i][j] = a[i][j] ^ 1;
			a[i-1][j] = a[i-1][j] ^ 1;
			a[i+1][j] = a[i+1][j] ^ 1;
			a[i][j+1] = a[i][j+1] ^ 1;
			}
		return;
	}


	if(i==j){
		if(i==1){ //for 2nd mid and 3rd row

			a[i][j] = a[i][j] ^ 1;
			a[i-1][j] = a[i-1][j] ^ 1;
			a[i+1][j] = a[i+1][j] ^ 1;
			a[i][j-1] = a[i][j-1] ^ 1;
			a[i][j+1] = a[i][j+1] ^ 1;
		}
		if(i==2){
			
			a[i-1][j] = a[i-1][j] ^ 1;
			a[i][j] = a[i][j] ^ 1;
			a[i][j-1] = a[i][j-1] ^ 1;
		}
		return;
	}

	if((i+j) == 2)
	{
		if(!i){
			
			a[i][j] = a[i][j] ^ 1;
			a[i+1][j] = a[i+1][j] ^ 1;
			a[i][j-1] = a[i][j-1] ^ 1;
		}

		else{

			a[i][j] = a[i][j] ^ 1;
			a[i-1][j] = a[i-1][j] ^ 1;
			a[i][j+1] = a[i][j+1] ^ 1;
		}

		return;

	}

	if((i+j) == 3){
		if(i==1){

			a[i][j] = a[i][j] ^ 1;
			a[i][j-1] = a[i][j-1] ^ 1;
			a[i-1][j] = a[i-1][j] ^ 1;
			a[i+1][j] = a[i+1][j] ^ 1;
		}
		
		else{
			
			a[i-1][j] = a[i-1][j] ^ 1;
			a[i][j] = a[i][j] ^ 1;
			a[i][j+1] = a[i][j+1] ^ 1;
			a[i][j-1] = a[i][j-1] ^ 1;
		}
		
		return;
	}
	
}

int main()
{
	
	

	int a[3][3];
	int b[3][3];

	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			b[i][j] = 1;

	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];

			if(a[i][j]%2 == 1 ||a[i][j] == 1)
				alter(b,i,j);
		}

	for(int i=0;i<3;i++)
	{	for(int j=0;j<3;j++)
		{	cout<<b[i][j];
		}
		cout<<endl;
	}
	return 0;

}