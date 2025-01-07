#include<bits/stdc++.h>
using namespace std;

#define ll long long
bool dist(int y){

	int x0 = y%10;
	y = y/10;
	int x1 = y%10;
	y = y/10;
	int x2 = y%10;
	y = y/10;
	int x3 = y%10;

	if(x0!=x1 && x0!=x2 && x0!=x3 && x1 !=x3  && x1!=x2 && x2!=x3){
		return true;
	}
	else{
		return false;
	}
	
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

	int y;
	cin>>y;
	y++;
	while(!dist(y)){
		y++;
	}

	cout<<y<<endl;

	return 0;

}