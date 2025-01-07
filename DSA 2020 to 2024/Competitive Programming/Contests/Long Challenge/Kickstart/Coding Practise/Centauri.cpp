#include <iostream>
#include <string>

using namespace std;

string GetRuler(const string& kingdom) {
  // TODO: implement this method to determine the ruler name, given the kingdom.
  string ruler = "";
  int z = kingdom.length();

  if(kingdom[z-1]=='y'){
      ruler = "nobody";
  } else if(kingdom[z-1]=='a'||kingdom[z-1]=='e'||kingdom[z-1]=='i'||kingdom[z-1]=='o'||kingdom[z-1]=='u'||kingdom[z-1]=='A'||kingdom[z-1]=='E'||kingdom[z-1]=='I'||kingdom[z-1]=='O'||kingdom[z-1]=='U'){
    ruler = "Alice";
  } else{
    ruler = "Bob";
  }
  return ruler;
}

int main() {

	
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("E:\\The Dead Promise\\input.txt","r",stdin);
	freopen("E:\\The Dead Promise\\output.txt","w",stdout);

	#else
	// online submission
	#endif
	
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}