/*
	Set is unordered
	Set don't have any duplicate elements
	Data inside the set is in sorted order
	No duplicate are in set

	function()
	
	> insert()
	> find()
	> count() - To count the data
	> erase()

	set vs unordered_set
	
	Set -: Data are in sorted order(Binary search Tree)
	Best : O(log N)
	worst : O(N)

	Unordered_set -: Data can be in any order(hasing internal mechanism)
	Best : O(1)
	worst: O(N)

*/
#include<iostream>
#include<set>

using namespace std;

int main()
{

	set<int> s;
	//insert
	s.insert(5);
	s.insert(4);
	s.insert(1);
	s.insert(2);
	cout<<"Size "<<s.size()<<endl;
	for(auto i :s){ // i will directly hold the value in this part
		cout<<i<<endl;
	}

	auto x = s.find(3); // s.find will return the address
	cout<<*x<<endl;

	if(x==s.end()){
		cout<<"Not Present"<<endl;
	}

	if(s.count(5)){ //count
		cout<<"Present"<<endl;
	}
	else{
		cout<<"Not Present"<<endl;
	}

	// set<int>::iterator  it;
	// for(it=s.begin();it!=s.end();it++)
	// {
	
	// }

	s.erase(4);
	for(auto x:s){
		cout<<x<<" "<<s.size()<<"\n";
		s.erase(x);
	}
	return 0;
}

