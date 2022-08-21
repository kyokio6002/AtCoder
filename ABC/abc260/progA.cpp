#include<bits/stdc++.h>
#include <cinttypes>
using namespace std;

int main(){

  char c;
  map<char,int> mp;
  for(int i=0;i<3;i++){
    cin >> c;
    mp[c]++;
  }

  if(mp.size()==1){
    cout << -1 << endl;
    return 0;
  }
  for(auto v:mp){
    if(v.second<=1){
      cout << v.first << endl;
      return 0;
    }
  }
}
