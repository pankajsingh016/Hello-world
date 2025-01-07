#include<iostream>

using namespace std;

#define size 10

int main()
{
	int A[] = {2,8,15,18};
	int B[] = {5,9,12,17};

	int n1 = sizeof(A)/sizeof(A[0]);
	int n2 = sizeof(B)/sizeof(B[0]);

	int C[size];

	int i,j,k;
	i=0; j=0; k=0;

	while(i < n1 && j < n2)
	{
		if(A[i] < B[j])
		{
			C[k] = A[i];
			i++;
			k++; 
		}

		else if(B[j] < A[i])
		{
			C[k] = B[j];
			j++;
			k++;
		}

		else{
			
			C[k] = A[i];
			k++; i++;

			C[k] = B[j];
			k++; j++;
		}
	}

	for(;i<n1;i++,k++)
	{
		C[k] = A[i];
	}

	for(;j<n2;j++,k++)
	{
		C[k] = B[j];
	}


	for(int i=0;i<(n1+n2);i++){
		cout<<C[i]<<" ";
	}


	return 0;
}