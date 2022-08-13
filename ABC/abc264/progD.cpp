#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;

  int ans=0;
  char tmp;
  map<char,int> mp;
  string atcoder="atcoder";
  for(int i=0;i<atcoder.length();i++)mp[atcoder[i]]=i;

  for(int i=0;i<atcoder.length();i++){
    int index=s.find(atcoder[i]);
    while(s[mp[atcoder[i]]]!=atcoder[i]){
      tmp=s[index-1];
      s[index-1]=s[index];
      s[index]=tmp;
      ans++;
      index--;
    }
  }

  cout << ans << endl;
}
