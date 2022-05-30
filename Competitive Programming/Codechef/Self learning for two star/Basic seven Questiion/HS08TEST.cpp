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

	float withdraw;
	float balance;
	cin >> withdraw >> balance;

	float charge = 0.50;

	if (((int)withdraw % 5 == 0) && balance >= (withdraw + charge))
	{
		balance = balance - charge - withdraw;
	}

	cout << std::fixed << setprecision(2) << balance << endl;

	return 0;
}