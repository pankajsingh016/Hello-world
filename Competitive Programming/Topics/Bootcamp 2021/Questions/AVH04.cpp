#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin>>N;

	int up = N*(N-1)/2;
	
	map<int,int> rec;

	for(int i=1;i<=N;i++)
	{
		rec[i] = 0;
	}

	while(up --)
	{
		int T1,T2,G1,G2;
		cin>>T1>>T2>>G1>>G2;

		if(G1==G2){ 
			rec[T1] += 1;
			rec[T2] += 1;
		}

		else if(G1 > G2){
			rec[T1] += 4;
		}

		else{
			rec[T2] += 4;
		}
	}

	int max = 0;
	int win = 0;

	for(int i=1;i<=N;i++)
	{
		if(rec[i] > max){
			win = i;
			max = rec[i];
		}
	}

	cout<<win;

	return 0;

}