#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

const int N = int(1e5+3);
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

	
	ll vasya = 0;
	ll petya = 0;

	int n;
 	int m;
	cin>>n;
	
	int a[N];
	int b[N];

	for(int i=0;i<n;i++){
		cin>>a[i];
		b[a[i]] = i+1;
	}

	cin>>m;
	
	for(int i=0;i<m;i++){

		int x;
		cin>>x;	
		vasya = (vasya + b[x]);	
		petya = petya + (n- b[x]+1);

	}
	cout<<vasya<<" "<<petya<<endl;
	return 0;
}
