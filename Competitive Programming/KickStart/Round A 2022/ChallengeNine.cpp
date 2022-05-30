#include <bits/stdc++.h>
using namespace std;

#define ll long long

template <typename T, typename TT>
void result(T x, TT y)
{
	cout << "Case #" << x << ":"
		 << " " << y << endl;
}

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

	for (int i = 1; i <= t; i++)
	{
		string n;
		cin >> n;
		int number = 0;
		for (int j = 0; j < n.size(); j++)
		{
			number += ('0' - n[i]);
		}

		if (number % 9 == 0)
		{
			result(i, "0" + n);
		}
		else
		{
			int r = 0;
			while (number % 9 != 0)
			{
				number = number + r;
				r++;
			}
			char ans = '0' + r;

			int pos = n.size();
			int z = n.size();

			while (z--)
			{

				if (ans > n[z])
				{
					break;
				}
				pos = z;
			}

			string fans = "";
			for (int k = 0; k < n.size(); k++)
			{
				if (k == pos)
				{
					fans += ans;
				}
				fans += n[k];
			}

			if (pos == n.size())
				fans = fans + ans;

			result(i, fans);
		}
	}

	return 0;
}