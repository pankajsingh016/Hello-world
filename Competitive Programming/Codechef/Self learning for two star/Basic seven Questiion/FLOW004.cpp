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

		string number;
		cin >> number;

		int a = number.length();
		int ans = 0;

		ans = int(number[0]-'0') + int(number[a - 1]-'0');
		cout << int(ans) << endl;
	}

	return 0;
}