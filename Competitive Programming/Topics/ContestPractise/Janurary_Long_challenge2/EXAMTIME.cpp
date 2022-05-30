#include<bits/stdc++.h>
using namespace std;

#define ll long long

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
			int dragon[4];
			cin>>dragon[0]>>dragon[1]>>dragon[2];
			dragon[3] = dragon[0]+dragon[1]+dragon[2];

			int sloth[4];
			cin>>sloth[0]>>sloth[1]>>sloth[2];
			sloth[3] = sloth[0]+sloth[1]+sloth[2];

			if(dragon[3]==sloth[3])
			{
				if(dragon[0] == sloth[0])
				{
					if(dragon[1]==sloth[1])
					{
						if(dragon[2]==dragon[2])
						{
							cout<<"TIE"<<endl;
						}
						else if(dragon[2]>sloth[2])
						{
							cout<<"DRAGON"<<endl;
						}
						else{
						cout<<"SLOTH"<<endl;
						}
					}

					else if(dragon[1]>sloth[1])
					{
						cout<<"DRAGON"<<endl;
					}
					else{
						cout<<"SLOTH"<<endl;
					}
				}

				else if(dragon[0]>sloth[0])
				{
					cout<<"DRAGON"<<endl;
				}
				else{
					cout<<"SLOTH"<<endl;
				}
			}
				else if(dragon[3]>sloth[3])
				{
					cout<<"DRAGON"<<endl;
				}
				else{
					cout<<"SLOTH"<<endl;
				}
		}
	return 0;

}