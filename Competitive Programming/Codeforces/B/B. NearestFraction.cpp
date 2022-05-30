#include<iostream>
using namespace std;

int main()
{
	int x,y,n;
	cin>>x>>y>>n;
	
	double min = 1e10;
	int a = 0,b = 0;
	for(int i=1;i<=n;i++)
	{
		int num = (double)i*x/y;
		double t;
		t = abs(double(x/y) - double(num/i));

		if(t < min)
		{
			min = t;
			a = num, b = i;
		}

		t = abs(double(x/y) - double((num+1)/i));

		if(t < min){
			min = t;
			a =  num+1;
			b = i;
		}
	}

	cout<<a<<"/"<<b<<endl;
	return 0;
}

