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


	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	int tdt = (k*l)/nl;
	int tlt = c*d;
	int tst = p/np;
	int toasts = min(tdt,tlt);
	toasts = min(tst,toasts);
	toasts = toasts /n;
	cout<<toasts<<endl;

	return 0;

}