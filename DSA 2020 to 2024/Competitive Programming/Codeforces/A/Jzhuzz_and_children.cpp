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

	int n,m;
	cin>>n>>m;

	vector<int>ar(n);
	queue<int> q;
	for(int i=0;i<n;i++){
		cin>>ar[i];

		if(ar[i]<=m){
			ar[i] = 0;
		}
		else{
			ar[i] = ar[i] - m;
			q.push(i);
		}
	}

	while(!q.empty() && q.size()!=1){

		int x = q.front();
		int a = ar[x] - m;
		ar[x] = a;
		if(ar[x]<=0){
			q.pop();
		}
		else{
			q.push(x);
			q.pop();
		}
	}

	if(q.size()==0){
		cout<<n<<endl;
	}
	else
		cout<<q.front()+1<<endl;

	// 9 -> 6 -> 3 -> 0 
	// 5 -> 2 -> 0
	// 2 -> 0
	// 3 -> 0
	// 7 -> 4 -> 3 -> 1 -> 0
	// 1 -> 0
	// 1 -> 0
	// 8 -> 5 -> 2 -> 0
	// 4 -> 1 -> 0
	// 6 -> 3 -> 0
	return 0;

}

// 9 3
// 9 5 2 3 7 1 8 4 6