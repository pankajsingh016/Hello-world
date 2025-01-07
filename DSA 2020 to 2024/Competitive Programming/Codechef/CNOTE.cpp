#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        
        int left_page = x-y;
        int min =100000; 
        int p[n],c[n];
        bool d = false;

        for(int i=0;i<n;i++){
            cin>>p[i];
            cin>>c[i];
            if(c[i] <= k){

                if(p[i] >= left_page){
                    d = true;
                }

            }
        }
        if(d){cout<<"LuckyChef"<<endl;}
        else{cout<<"UnluckyChef"<<endl;}
    }
    return 0;

}
