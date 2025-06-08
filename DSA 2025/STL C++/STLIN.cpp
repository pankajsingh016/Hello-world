#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int> pr1 = make_pair(2,8);
    cout<<pr1.first<<" "<<pr1.second<<endl;

    pair<int,char>pr2 = make_pair(2,'b');
     cout<<pr1.first<<" "<<pr1.second<<endl;

    
     //Nested Pairs
     pair<pair<int,char>,int> pr3 = {{4,'h'},8};
     cout<<pr3.first.second<<endl;

}


void explainVectors(){
  int arr[5]; //fixed nature
  vector<int> ar; //dynamic storage

  //insert
  ar.push_back(5); ar.push_back(4); ar.push_back(3);
  ar.emplace_back(9);

  //getting the size
  cout<<ar.size()<<endl;
  
  // traverse
  for(int i=0;i<ar.size();i++)
  {
    cout<<ar[i]<<" ";
  }cout<<endl;

  //iterator 
  vector<int>::iterator beginItr = ar.begin();
  vector<int>::iterator endItr = ar.end();

  for(vector<int>::iterator i = beginItr; i<endItr;i++)
  {
    cout<<*i<<" ";
  } cout<<endl;

  for(auto i : ar){
    cout<<i<<" ";
  }
  cout<<endl;


  //reverse Iterator
  auto reverseBegin = ar.rbegin();
  auto reverseEnd = ar.rend();

  for(auto i = reverseBegin; i < reverseEnd; i++){
    cout<<*i<<" ";
  } cout<<endl;

  //duplicate
  vector<int> duplicate(ar.begin()+3,ar.end()-1);

  //erase
  ar.erase(ar.begin()+1,ar.end()-2);
  for(auto it: ar)
  {
     cout<<it<<" ";
  }

  //clear 
  ar.clear();

  //swap
  vector<int>vec1 = {7,8};
  vector<int>vec2 = {10,11};
  swap(vec1,vec2);


  //insert at a index
  vec1.insert(vec1.begin(),2);

}

int main(){
    cout<<"Hello World"<<endl;
    // explainPair();
    explainVectors();
    return 0;
}
