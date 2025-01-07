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
		int a, b, c;
		cin >> a >> b >> c;

		int sum = a + b + c;
		int a1 = max({a, b, c});
		int x = min({a, b, c});
		int a2 = sum - a1 - x;
		cout << (a1 + a2) << endl;
	}
	return 0;
}