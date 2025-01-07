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

	int n;
	cin>>n;

	int ocountL = 0; //all closed doors left
	int ocountR = 0; //all closed doors right

	for(int i=0;i<n;i++)
	{
		int li,ri;
		cin>>li>>ri;

		if(li==0)
			ocountL++;

		if(ri==0)
			ocountR++;
	}	

	int lcountL = n-ocountL;// all opened doors right
	int lcountR = n-ocountR;// all opened doors right


	int minL = lcountL <= ocountL? lcountL:ocountL;
	int minR = lcountR <= ocountR? lcountR:ocountR;


	cout<<(minL+minR)<<endl;

	return 0;

}