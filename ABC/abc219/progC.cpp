#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  string x;
  cin >> x;
  map<char,char> mp;
  for(int i=0;i<x.length();i++)mp[x[i]]=('a'+i);
  ll n;
  cin >> n;
  vector<string> s(n);
  vector<pair<string,int>> ss(n);
  for(ll i=0;i<n;i++){
    cin >> s[i];
    ss[i].first=s[i];
    ss[i].second=i;
    for(int j=0;j<s[i].size();j++){
      ss[i].first[j]=mp[ss[i].first[j]];
    }
  }

  sort(ss.begin(),ss.end());
  for(int i=0;i<n;i++)cout << s[ss[i].second] << endl;

}

