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
		int n;
		cin >> n;
		vector<int> A;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin>>x;
			A.push_back(x);
		}

		sort(A.begin(), A.end());
		for (auto i : A)
			cout << i << " ";
		cout << endl;
		auto it = lower_bound(A.begin(), A.end(), 1);
		cout << *it << endl;
	}
	return 0;
}