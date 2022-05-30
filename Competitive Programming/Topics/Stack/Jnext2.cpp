#include<bits/stdc++.h>
using namespace std;

#define ll long long


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int Next(int ar[],int size)
{
	int g=0;

	int i=0,j;
	for(i=size-1;i>0;i--)
	{
		if(ar[i]>ar[i-1])
		{
			break;
		}
	}

	if(i==0)
	{
		return -1;
	}

	int min = ar[i-1];

	//we need to find swap position:
	// i+1 to size-1
	
	int pos = i;
	for(int k=i;k<size;k++)
	{
		if(ar[k]<ar[pos] && ar[k]>min)
		{
			pos = k;
		}	
	}
	
	swap(&ar[i],&ar[pos]); //swapping values


	//sort the remaning values
	sort(ar+i,ar+size);

	for(int i=0;i<size;i++)
	{
		g = g+ar[i];
		g = g*10;
	}
	g = g/10;
	return g;
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
	while(t--)
		{
			int n;
			cin>>n;
			int ar[n];

			for(int i=0;i<n;i++)
				cin>>ar[i];

			cout<<Next(ar,n)<<endl;
		}
	return 0;

}