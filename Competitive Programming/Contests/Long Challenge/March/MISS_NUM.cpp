#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>

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
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		vector<pair<int, int>> x;
		x.push_back(make_pair(abs(a), a));
		x.push_back(make_pair(abs(b), b));
		x.push_back(make_pair(abs(c), c));
		x.push_back(make_pair(abs(d), d));

		sort(x.begin(), x.end());

		for(auto i : x)
		{
			cout<<i.second<<" ";
		}cout<<endl;

		int twoa = x[1].second + x[2].second;

		if (twoa % 2 == 0)
		{
			twoa = twoa / 2;
			int y = x[3].second / twoa;

			if (int(twoa / y) == x[0].second)
			{
				cout << twoa << " " << y << endl;
			}
			else
			{
				cout << "-1 -1" << endl;
			}
		}

		else
		{
			cout << "-1 -1" << endl;
		}
		x.clear();
	}
	return 0;
}