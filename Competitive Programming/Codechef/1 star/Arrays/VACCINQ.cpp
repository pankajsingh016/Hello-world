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
		int n, p, x, y;
		cin >> n >> p >> x >> y;

		vi arr(n);
		int time = 0;
		p = p - 1;
		for (int i = 0; i < n; i++)
		{
			int temp;
			cin >> temp;
			if (temp == 1)
			{
				arr[i] = y;
			}
			else
			{
				arr[i] = x;
			}

			if (i <= p)
			{
				time += arr[i];
			}
		}

		cout << time << endl;
	}
	return 0;
}