#include<bits/stdc++.h>
using namespace std;

#define ll long long


ll solve(ll n)
{
    ll left = 1;
    ll right = 10e9;
    ll mid;
    ll ans = 1;

    if(n==1)
    {
        return 1;
    }

    while(left<=right)
    {
        mid = left + (right - left)/2;

        if(mid*(mid+1)/2 <= n)
        {
            ans = mid;
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }

    }

    return ans;
}
int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);

    ll test;
    cin>>test;

    while(test--)
    {
        ll n;
        cin>>n;
        cout<<solve(n)<<endl;

    }
	
	return 0;

}
