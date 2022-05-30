#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("E:\\The Dead Promise\\input.txt", "r", stdin);
	freopen("E:\\The Dead Promise\\output.txt", "w", stdout);

#else
// online submission
#endif

	int t;
	cin >> t;
	while (t--)
	{
		int N, a, b;
		cin >> N >> a >> b;
		vector<int> an(N);
		int abd = 0;
		int ad = 0;
		int bd = 0;
		for (int i = 0; i < N; i++)
		{
			cin >> an[i];
		}
		for (int i = 0; i < N; i++)
		{
			if (an[i] % a == 0 & an[i] % b == 0)
			{
				abd++;
			}
			else if (an[i] % a == 0)
			{
				ad++;
			}
			else if (an[i] % b == 0)
			{
				bd++;
			}
			else
			{
				continue;
			}
		}

		string winner;

		if(abd>0)
		{
			ad++;
		}

		if(ad>bd){
			winner = "BOB";
		}
		else{
			winner = "ALICE";
		}
		
		cout << winner << endl;
	}
	return 0;
}