#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  map<string,int> mp;
  mp["ABC"]=0;
  mp["ARC"]=0;
  mp["AGC"]=0;
  mp["AHC"]=0;
  for(int i=0;i<3;i++){
    cin >> s;
    mp[s]++;
  }

  for(auto v:mp){
    if(v.second==0){
      cout << v.first << endl;
      break;
    }
  }


}
