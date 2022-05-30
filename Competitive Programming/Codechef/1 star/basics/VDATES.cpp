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
		ll D, L, R;
		cin >> D >> L >> R;

		if (D >= L && D <= R)
		{
			cout << "Take second dose now" << endl;
		}
		else if (D < L)
		{
			cout << "Too Early" << endl;
		}
		else if (D > R)
		{
			cout << "Too Late" << endl;
		}
	}
	return 0;
}