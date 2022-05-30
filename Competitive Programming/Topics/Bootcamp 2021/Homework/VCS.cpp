#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin>>T;

	while(T--)
	{
		int N,M,K;

		cin>>N>>M>>K;
		unordered_set <int> ignored;
		unordered_set <int> tracked;

		for(int i=0;i<M;i++)
		{
			//ignored files
			int x;
			cin>>x;
			ignored.insert(x);
		}

		for(int i=0;i<K;i++)
		{
			//tracked files
			int y;
			cin>>y;
			tracked.insert(y);
		}


		// for(int i=1;i<=N;i++)
		// {
		// 	auto x = ignored.find(i);
		// 	if(x==ignored.end())
		// 	{
		// 		unignored.insert(i);
		// 	}


		// 	auto y = tracked.find(i);
		// 	if(y==tracked.end())
		// 	{
		// 		tracked.insert(i);
		// 	}

		// }

		//not we have all four data

		int cui = 0;
		int cuu = 0;


		for(int i=1;i<=N;i++){

			auto x = ignored.find(i);
			auto y = tracked.find(i);

			if( x != ignored.end() && y != tracked.end())
			{
				cui += 1;
			}

			if( x == ignored.end() && y == tracked.end())
			{
				cuu += 1;
			}

		}

		cout<<cui<<" "<<cuu<<endl;

		//output [untracked and ignored ] and [untracked and unignored]

	}
	return 0;

}