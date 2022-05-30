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

	int n;
	cin>>n;

	vector<int>p;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		p.push_back(x);
	}

	int min = p[0];
	int max = p[0];
	int amaz = 0;


	for(int i=1;i<n;i++)
	{
		if(p[i]>max){
			max = p[i];
			amaz++;
		}
		else if(p[i]<min){
			min = p[i];
			amaz++;
		}
		else{
			continue;
		}
	}

	cout<<amaz<<endl;

	return 0;

}