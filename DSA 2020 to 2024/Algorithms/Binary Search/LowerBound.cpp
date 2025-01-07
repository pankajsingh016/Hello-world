#include<bits/stdc++.h>
using namespace std;

#define ll long long


int lowerBound(int a[],int n,int k)
{
	int start = 0;
	int end = n;
	while(start < end){

		int mid = (start + end)/2;
		
		if(a[mid]>=k)
		{
			end = mid;
		}
		else{
			start = mid + 1;
		}
	}

	if(start < n && a[start] < k)
	{
		start++;
	}
	return start;
}


int main()
{

	// ios::sync_with_stdio(0);
	// cin.tie(0);
	// #ifndef ONLINE_JUDGE
	// freopen("E:\\Git\\Hello-world\\output.txt","r",stdin);
	// freopen("E:\\Git\\Hello-world\\output.txt","w",stdout);

	// #else
	// // online submission
	// #endif

	int n;
	cin>>n;

	int A[100];

	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}

	int k;
	cin>>k;


	//We have to found the Lower bound of K;

	int val = lowerBound(A,n,k);

	cout<<val<<endl;

	return 0;

}