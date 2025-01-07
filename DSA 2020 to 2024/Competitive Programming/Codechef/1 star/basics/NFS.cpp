#include <bits/stdc++.h>
using namespace std;

#define ll long long
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

		int U, A, V, S;
		cin >> U >> V >> A >> S;
		int v = ((U * U) - (2 * A * S));
		V = V * V;
		v = v * v;

		if (v <= V)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}