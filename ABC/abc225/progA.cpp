#include<bits/stdc++.h>
using namespace std;

int main(){

  map<char,int> mp;
  char c;
  for(int i=0;i<3;i++){
    cin >> c;
    mp[c]++;
  }

  if(mp.size()==3)cout << 6 << endl;
  else if(mp.size()==2)cout << 3 << endl;
  else if(mp.size()==1)cout << 1 << endl;
}
