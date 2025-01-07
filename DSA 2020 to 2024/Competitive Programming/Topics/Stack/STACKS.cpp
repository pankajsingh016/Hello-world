 #include<bits/stdc++.h>
using namespace std;

#define ll long long



// ll upperBound(vector<ll>s,ll val)
// {
// 	ll start = 0;
// 	ll end = s.size();
// 	ll mid;
// 	while(start < end)
// 	{
// 		mid = (start+end)/2;;

// 		if(s[mid]>val)
// 		{
// 			end = mid;
// 		}
// 		else{
// 			start = mid+1;
// 		}
// 	}

// 	if(start < end && s[start] <= val)
// 		start++;

// 	return start;

// }

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

			vector<ll>p;

			for(int i=0;i<n;i++)
			{

				ll x;
				cin>>x;

				auto it = upper_bound(p.begin(),p.end(),x);

				if(it==p.end())
				{
					p.push_back(x);
				}
				else{
					*it = x;
				}


				// ll pos = upperBound(p,x);

				// if(pos==p.size())
				// 	p.push_back(x);

				// else{
				// 	p[pos] = x;
				// }


			}

			cout<<p.size()<<" ";
			for(auto i:p)
			{
				cout<<i<<" ";
			}cout<<endl;
		}
	return 0;

}