#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>


template <typename ar, typename s>
void print_array(ar X, s siz){
    int size = siz;
    for(int i=0;i<size;i++)
        cout<<X[i]<<" ";
    cout<<endl;
}



int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("/media/pankajsingh/workbench/Git/Hello-world/input.txt","r",stdin);
    freopen("/media/pankajsingh/workbench/Git/Hello-world/output.txt","w",stdout);

    #else
    // online submission
    #endif

    int n;
    cin>>n;

    int ar[n];

    //inserting array
    for(int i=0;i<n;i++)
        cin>>ar[i];


    //using starting and end pointer approach 

    print_array(ar,n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ar[i]<ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    print_array(ar,n);
    
    return 0;

}