#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define mod 1000000007

int main(){

  string s;
  cin >> s;
  int len=s.length();

  map<int,char> cs;
  cs['c']='0';
  cs['h']='c';
  cs['o']='h';
  cs['k']='o';
  cs['u']='k';
  cs['d']='u';
  cs['a']='d';
  cs['i']='a';

  map<char,int> mp;
  char now;
  for(int i=0;i<len;i++){
    now=s[i];
    if(now=='c'){
      mp[now]++;
    }
    // cout << "s:" << s[i] << endl;
    // cout << "mp[sc]:" << mp[cs[now]] << endl;
    mp[now]+=mp[cs[now]];
    mp[now]=mp[now]%mod;
    // cout << "mp[now]:" << mp[now] << endl;
  }

  cout << mp['i'] << endl;
}
