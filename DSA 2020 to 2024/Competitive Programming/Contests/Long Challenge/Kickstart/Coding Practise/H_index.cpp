#include<bits/stdc++.h>

using namespace std;



vector<int> getHIndex(vector<int>citation)
{
	vector<int> hindx;

	for(int i=0;i<citation.size();i++)
	{
		int h = i+1;
		int count = 0;



	}


	return hindx;

}

int main()
{

	
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("E:\\The Dead Promise\\input.txt","r",stdin);
	freopen("E:\\The Dead Promise\\output.txt","w",stdout);

	#else
	// online submission
	#endif

	int test;
	cin>>test;

	for(int i=1;i<=test;i++)
	{
		int paper_counts;
		cin>>paper_counts;

		vector<int> citation(paper_counts);
		for(int i=0;i<paper_counts;i++)
		{
			cin>>citation[i];
		}

		vector<int> answer = getHIndex(citation);
		cout << "Case #" << i << ": ";
		for(int k=0;k<answer.size();k++)
		{
			cout<<answer[k]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
