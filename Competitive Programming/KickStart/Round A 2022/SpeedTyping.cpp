#include<bits/stdc++.h>
using namespace std;

#define ll long long



template <typename T,typename TT>
void result(T x, TT y)
{
	cout << "Case #" << x << ":"<< " " << y << endl;
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
	
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		string o,oo;
		cin>>o>>oo;

		int po1 = 0;
		int poo1 = 0;
		int ans = 0;
		while(po1 < o.size() && poo1< oo.size())
		{
			if(o[po1]==oo[poo1])
			{
				po1++;
				poo1++;
			}
			else{
				poo1++;
				ans++;
			}
		}

		if(po1 != (o.size()))
		{
			result(i,"Impossible");
		}
		else{
			ans = ans + (oo.size() - poo1);
			result(i,ans);
		}
	}


	return 0;

}