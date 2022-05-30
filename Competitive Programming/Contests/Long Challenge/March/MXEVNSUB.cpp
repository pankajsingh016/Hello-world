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

	for (int i = 0; i < t; i++)
	{
		int N;
		cin >> N;

		int sum = N * (N + 1) / 2;

		if (sum % 2 == 0)
		{
			cout << N << endl;
		}
		else
		{
			cout << N - 1 << endl;
		}
	}
	return 0;
}