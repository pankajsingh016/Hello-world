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

	int n, k;
	cin >> n >> k;

	// n contributors
	vector<pair<string, int>> contrib(n);
	vector<pair<string, int>> skills;

	for (int i = 0; i < n; i++)
	{
		string s;
		int nskill;

		cin >> s;
		cin >> nskill;

		contrib.push_back(make_pair(s, nskill));

		for (int j = 0; j < nskill; j++)
		{

			string tech;
			int level;
			cin >> tech;
			cin >> level;
			skills.push_back(make_pair(tech, level));
		}
	}

	// taking projects as input

	string projects[k];
	int d[k], s[k], b[k], r[k];
	vector<pair<string, int>> required;

	for (int i = 0; i < k; i++)
	{
		cin >> projects[i];
		cin >> d[i] >> s[i] >> b[i] >> r[i];

		string s;
		int lev;
		cin >> s;
		cin >> lev;
		required.push_back(make_pair(s, lev));
		s.clear();
	}
	// output logic
	cout<<k<<endl;
	vector<pair<string,int>>ans1;//roles and project
	for(int i=0;i<k;i++){
		ans1.push_back(make_pair(projects[i],r[i]));
	}
	

	return 0;
}