#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool solve(int N, ll C){
   int A[N];
   int sum = 0; 
    for(int i=0;i<N;i++){
        cin>>A[i];
        sum = sum + A[i];
    }
    if(sum < C)
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int N;
        ll C;
        cin>>N>>C;
    
        if(solve(N,C)){
            cout<<"Yes"<<endl;             
        } else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
