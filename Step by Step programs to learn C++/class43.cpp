#include<iostream>
#include<cstring>
#include<string>

using namespace std;
int main()
{
    char s[10] = "Hello";
    strcpy(s,"Pankaj I");
    //cout<<s;

    string s1;  // s is the object of class string
    s1="Pankaj";
    cout<<s1<<endl;

    cout<<s1.length(); //calling method to see the length

    return 0;
}
/*
  s= "Hello" is not valid with char array
  s + s1 is not valid with char array
*/