#include<iostream>
using namespace std;

void binarySearch(int a[],int n,int val)
{
	int start = 0;
	int end = n-1;
	int mid;

	while(start < end)
	{
		mid = (start + end) /2;
		if(val==a[mid])
		{
			cout<<mid<<endl;
			break;
		}

		else if(val > a[mid])
		{
			start = mid+1;
		}
		 
		else{
			end = mid;
		}

	}

	if(start>end)
	{
		cout<<"-1"<<endl;
	}
}

void lowerBound(int a[],int n,int val)
{
	int start = 0;
	int end = n-1;
	int mid;
	while(start < end)
	{
	  mid = (start+end)/2;

	  //left part of the array
	  if(a[mid]>=val)
	  {
		  end = mid;
	  }	
	  else{
		  start = mid+1;
	  }
	}

	if(start < n && a[start] < val){
		start++;	
	}
	cout<<start<<endl;
}

void upperBound(int a[],int n,int val)
{	int start = 0;
	int end = n-1;
	int mid;
	while(start < end)
	{
	  mid = (start+end)/2;

	  //left part of the array
	  if(a[mid]>=val)
	  {
		  end = mid;
	  }	
	  else{
		  start = mid+1;
	  }
	}

	if(start < n && a[start] <= val){
		start++;	
	}
	
	cout<<start<<endl;
	
}

int main()
{

	// ios::sync_with_stdio(0);
	// cin.tie(0);
	// #ifndef ONLINE_JUDGE
	// freopen("E:\\The Dead Promise\\input.txt","r",stdin);
	// freopen("E:\\The Dead Promise\\output.txt","w",stdout);

	// #else
	// // online submission
	// #endif

	int ar[] = {1,22,22,23,46,58,78,89,99,100};
	int len = sizeof(ar)/sizeof(ar[0]);

	int val;
	cout<<"Enter a value to find the index of =:";
	cin>>val;

	binarySearch(ar,len,val);
	lowerBound(ar,len,val);
	cout<<*lower_bound(ar,ar+len,val)<<endl;

	cout<<endl;
	cout<<endl;
	upperBound(ar,len,val);
	return 0;
}