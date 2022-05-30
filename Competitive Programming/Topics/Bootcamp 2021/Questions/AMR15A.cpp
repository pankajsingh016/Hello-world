#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int eve  = 0;
	int odd  = 0;
	while(n--)
	{
		int x;
		cin>>x;
		
		if(x%2==0){
			eve++;
		} else{
			odd++;
		}
	}

	if(eve>odd){
		cout<<"READY FOR BATTLE"<<endl;
	}
	else{
		cout<<"NOT READY"<<endl;
	}

	return 0;
}
