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
		int w1, w2, x1, x2, M;
		cin >> w1 >> w2 >> x1 >> x2 >> M;

		int gain = w2 - w1;
		int l1 = x1 * M;
		int l2 = x2 * M;

		if (gain >= l1 && gain <= l2)
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}
	return 0;
}