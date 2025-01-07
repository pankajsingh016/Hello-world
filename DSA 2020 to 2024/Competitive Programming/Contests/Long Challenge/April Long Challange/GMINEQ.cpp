#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("/media/pankajsingh/workbench/C,C++/The Dead Promise/input.txt","r",stdin);
    freopen("/media/pankajsingh/workbench/C,C++/The Dead Promise/output.txt","w",stdout);

    #else
    // online submission
    #endif


    int t;
    cin>>t;
    while(t--)
        {
            int n;
            cin>>n;

            vi arr(n);
            
            int po = 0;
            int neg = 0;

            for(int i=0;i<n;i++)
            {
                cin>>arr[i];

                if(arr[i]==1)
                {
                    po++;
                }
                else if(arr[i]==-1)
                {
                   neg++; 
                }
            }

            if(po==0||neg==0)
            {
                cout<<"NO"<<endl;
                continue;
            }

            /*
                    po <= ((neg/2)+1)*2  or neg <= ((po/2)+1)*2 (if neg or po is even)

                    (po+1) <= (neg-1)*(neg-1)

            */

           bool ne = true;
           bool p = true;

           int rp = po%2;

           int rn = neg%2;

           if(po <= (((neg-rn)/2)+1)*2)
           {
               ne = true;
           }
           else{
               ne = false;
           }

           if(neg <= (((po-rp)/2)+1)*2)
           {
               p = true;
           }
           else{
               p = false;
           }

            if(rp==0 && rn==0)
            {
                if(p||ne)
                {
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }

            else if(rp==0 && rn==1)
            {
                if(p||ne){

                    if(po<neg && (neg+1<=(((po-rp)/2)+1)*2))
                    {
                        cout<<"YES"<<endl;
                    }
                    else if(neg<po && po<=(((neg-rn)/2)+1)*2)
                    {
                        cout<<"YES"<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }

                } else{
                    cout<<"NO"<<endl;
                }
            }

            else if(rp==1 && rn==0)
            {

                if(p||ne){


                    if(po<neg && neg<=(((po-rp)/2)+1)*2)
                    {
                        cout<<"YES"<<endl;
                    }
                    else if(neg<po && po+1<=(((neg-rn)/2)+1)*2)
                    {
                        cout<<"YES"<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }

                } else{
                    cout<<"NO"<<endl;
                }
            }

            else if(rp==1 && rn==1){

               if(p||ne){

                   if(po==neg){
                       cout<<"YES"<<endl;
                   }

                   else if(po<neg && (neg<(((po-rp)/2)+1)*2))
                   {
                       cout<<"YES"<<endl;
                   }
                   else if(neg<po && (po<(((neg-rn)/2)+1)*2)){
                       cout<<"YES"<<endl;
                   }

                   else{
                       cout<<"NO"<<endl;
                   }

               } else{
                   cout<<"NO"<<endl;
               }
            }
        }
    return 0;

}