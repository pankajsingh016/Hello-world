#include<bits/stdc++.h>
using namespace std;

#define ll long long

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
			ll n;
			stack<ll> s;
			cin>>n;

			for(int i=0;i<n;i++) //O(N)
				{
					int a;
					cin>>a;
					s.push(a);
				}

			stack<ll> ans;
			bool swapped = false;

			while(!s.empty()) //O(N)
			{
				int x = s.top();

				if(ans.empty())
				{
					ans.push(x);
				}	

				else{

					if(x < ans.top() && swapped == false)
					{
						int y = ans.top();
						ans.pop();
						ans.push(x);
						ans.push(y);
						swapped = true;
					}

					else{
						ans.push(x);
					}
				}

				s.pop();
			}
			
			ll num = 0;
			for(int i=0;i<n;i++) //O(N)
			{
				num = num+ans.top();
				num = num*10;
				ans.pop();
			}
			num = num/10;
			cout<<num<<endl;
		}
	return 0;

}