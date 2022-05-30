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

	int n, m, k;
	cin >> n >> m >> k;

	int ans = 0;

	while (n--)
	{
		vi arr(k + 1);
		int limi = 0;
		for (int i = 0; i <= k; i++)
		{
			cin >> arr[i];

			if (i != k)
				limi += arr[i];
		}

		if(limi >= m && (arr[k]<=10))
		{
			ans+=1;
		}
	}

	cout<<ans<<endl;

	return 0;
}