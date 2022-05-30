/*
	Maps : When we want data in key value pair
	"password":"xyz"
	"frequency" : "10"

	Map vs Unordered Map
	
	Map:
	> sorted according to keys
	> Binary serach tree
	> O(log N)
	> O(N)

	unordered Map:
	> anyorder
	> hasing
	> O(1)
	> O(N)


	fun
	> insert
	> find

*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	unordered_map<int,int> m;
	pair<int,int> p;

	m.insert({1,2}); // key -> 1 value -> 2
	m[3] = 4; //key -> 3 and value -> 4
	m[4] = 1;
	m[5] = 10;
	m[6] = 10;

	for(auto x:m){
		cout<<x.first<<" -> "<<x.second<<endl;
	}	

	auto x = m.find(3);
	cout<<x->first<<" "<<x->second<<endl;
	// if(m.find(3) != m.end()){ //find return the iterator
	// 	cout<<"Present"<<endl;
	// }

	// else{
	// 	cout<<"Not Present"<<endl;
	// }

	cout<<m[2]<<endl;

	return 0;

}