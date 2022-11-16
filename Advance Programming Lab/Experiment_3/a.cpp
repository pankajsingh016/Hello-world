// You are given a string containing characters A and B only. Your task is to change it into a 
// string such that there are no matching adjacent characters. 
// To do this you are allowed to delete zeros or more characters in the string your task is to find 
// the minimum number of required deletions. 

// For Example:  S = AABAAB remove an A at positions 0 & 3 to make S = ABAB

#include<bits/stdc++.h>

using namespace std;


string minimumDel(string s)
{

    vector<int> itemtodel;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            itemtodel.push_back(i-1);
        }
    }

    cout<<"Items to be Deleted are at position : ";
    for(auto i : itemtodel)
    {
        cout<<i<<", ";   
    }cout<<endl;

    vector<char> result;
    for(int i=0;i<s.size();i++)
    {
        if(std::find(itemtodel.begin(), itemtodel.end(),i)!=itemtodel.end())
        {
            continue;
        }
        else{
            result.push_back(s[i]);
        }
    }

    std::string r (result.begin(), result.end());
    return r;

}


int main()
{
    cout<<"Enter a String : ";
    string s;
    cin>>s;

    cout<<"Before Deletions : "<<s<<endl;

    s = minimumDel(s);

    cout<<"After Deletions : "<<s<<endl;

}