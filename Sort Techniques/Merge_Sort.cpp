//Merge Sort
#include<iostream>
using namespace std;

#define size 100

void merge(int arr[],int l,int mid,int r)
{
	int sl = mid - l + 1;
	int sr = r - mid;

	int L[sl];
	int R[sr];

	for(int i=0;i<sl;i++)
		L[i] = arr[l+i];
	
	for(int j=0;j<sr;j++)
		R[j] = arr[mid+j+1];

	int i = 0;
	int j = 0;
	int k = l;

	while(i < sl && j < sr)
	{
		if(L[i] <= R[j])
		{
			arr[k] = L[i];
			k++; i++;
		}

		else{
			arr[k] = R[j];
			k++; j++;
		}
	}

	while(i < sl)
	{
		arr[k] = L[i];
		k++;
		i++;
	}

	while(j < sr)
	{
		arr[k] = R[j];
		k++;
		j++;
	}

}

void mergesort(int arr[],int l,int u)
{
	if(l < u)
	{
		int mid = l+(u - l)/2;
		mergesort(arr,0,mid);
		mergesort(arr,mid+1,u);
		merge(arr,l,mid,u);
	}
}

int main()
{
	int n;
	cout<<"Enter the Length of Array"<<endl;
	cin>>n;
	cout<<"Enter the Array"<<endl;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}	
	
	mergesort(arr,0,n-1);

	cout<<"The Sorted array is : ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";

	return 0;
}