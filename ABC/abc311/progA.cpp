#include <iostream>
#include <map>
using namespace std;

int main(){

  int n;
  cin >> n;
  string s;
  cin >> s;

  map<char, int> mp;
  for(int i=0;i<s.length();i++){
    mp[s[i]]++;
    if(mp.size()==3){
      cout << i+1 << endl;
      return 0;
    }
  }

}
