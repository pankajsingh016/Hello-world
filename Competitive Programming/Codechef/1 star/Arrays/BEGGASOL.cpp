#include<bits/stdc++.h>
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
	freopen("E:\\The Dead Promise\\input.txt","r",stdin);
	freopen("E:\\The Dead Promise\\output.txt","w",stdout);

	#else
	// online submission
	#endif


	int t;
	cin>>t;
	while(t--)
		{
	       int n;
		   cin>>n;
		   vi fi(n);

		   int fuel = 0;
		   bool mark = true;

		   for(int i=0;i<n;i++)
			{
				cin>>fi[i];

				if(fuel >= i && mark)
					{
						fuel += fi[i];
						fi[i] = 0;
						
						if(fuel-(i+1) < 0)
							mark = false;

					}
			}

			int dis = fuel;

			cout<<dis<<endl;

		}
	return 0;

}