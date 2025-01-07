#include<bits/stdc++.h>
using namespace std;

void swap(long long *a,long long *b)
{
	long long temp = *a;
	*a = *b;
	*b = temp;
}

long long calnext(long long N[],long long size)
{
	long long ans = 0;

	//searching for a number greater than previously greater number

	long long i;
	for(i=size-1;i>0;i--)
	{
		if(N[i]>N[i-1])
		{
			break;
		}
	}

	//-----------------------------------------------
	if(i==0)
	{
		return -1;
	}

	//-----------------------------------------------

	long long pos = i;
	long long ll = i-1;

	for(long long j=pos;j<size;j++)
	{
		if(N[j]>N[ll] && N[j] < N[pos])
		{
			pos =  j;
		}
	}

	swap(&N[ll],&N[pos]);


	sort(N+ll+1,N+size);


	//--------------------making number last part;
	long long p = 1;
	for(long long j=0;j<size;j++)
	{
		ans = ans*10 + N[j];
		p = p*10;
	}

	return ans;
}
//--------------------------------main

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

	long long n;
	cin>>n;

	while(n--)
	{
		long long size;
		cin>>size;
		long long NUM[size];

		for(long long i=0;i<size;i++)
		{
			cin>>NUM[i];
		}
		
		long long ans = calnext(NUM,size);
		cout<<ans<<endl;

	}
	return 0;
}