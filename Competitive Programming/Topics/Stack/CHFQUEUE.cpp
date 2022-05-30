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


	int n,k;
	cin>>n>>k;

	vector<int>seq;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		seq.push_back(x);
	}

	stack<int> s;
	int ans = 1;
	for(int i=n;i>=1;i--)	
	{
		while(!s.empty() && seq[s.top()] >= seq[i])
			s.pop();
		
		if(!s.empty())
		{
			ans = (ans * (s.top() - i + 1))%10000000007;
		}
		s.push(i);

	}
	cout<<ans<<endl;
	return 0;

}