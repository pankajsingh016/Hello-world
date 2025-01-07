#include<iostream>
using namespace std;

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("E:\\Git\\Hello-world\\output.txt","r",stdin);
	freopen("E:\\Git\\Hello-world\\output.txt","w",stdout);

	#else
	// online submission
	#endif


	int A[] = {1,2,3,4,5,6,7,8,9};
	int size = sizeof(A)/sizeof(A[0]);

	int start = 0;
	int end = size-1;
	
	int val = 8;
	int ansIndex = -1;

	while(start <= end)
	{
		int mid = end + (start - end)/2;
		
		if(A[mid]==val){
			ansIndex = mid;	
			break;
		}
		else if(A[mid] > val)
		{
			end = mid;
		}
		else{
			start = mid + 1;
		}
	}
	if(start >= end)
	{
		ansIndex = -1; 
	}
	cout<<ansIndex<<endl;
	return 0;
}


