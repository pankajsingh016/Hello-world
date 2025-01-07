#include<iostream>
#include<vector>

using namespace std;

vector<int> get_icopy(vector<int> &freq){
	vector<int> r;

	for(int i=1;i<=6;i++)
	{
		int c = freq[i]/2;
		freq[i] = freq[i]/2;
		for(int j=0;j<c;j++){
			r.push_back(i);
		}
	}

	for(int i=1;i<=freq[7];i++)
		r.push_back(7);

	for(int i=6;i>=1;i--)
	{
		int c = freq[i];
		for(int j=0;j<c;j++){
			r.push_back(i);
		}
	}

	return r;
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		vector<int> ar(11,0);
		vector<int> freq(11,0);
		bool output = true;

		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
			freq[ar[i]]++;

			if(ar[i] > 7)
			{
				output = false;
			}
		}

		for(int i=1;i<=6;i++)
		{
			if(freq[i]%2==1||freq[i]==0){
				output=false;
			}
		}
		
		if(freq[7]==0)
		{
			output = false;
		}
		if(output==false){
			cout<<"No"<<endl;
			continue;
		}

		vector<int> icopy = get_icopy(freq);

		for(int i=0;i<n;i++)
		{
			if(ar[i]!=icopy[i]){
				output = false;
			}
		}

		if(output){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}