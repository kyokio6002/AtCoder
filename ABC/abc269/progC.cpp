#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;

using ll=long long;

int main(){

  ll n;
  cin >> n;

  int maxorder=0;
  vector<ll> bit;
  ll t=n;
  int i=0;
  ll tt=1;
  while(t>0){
    if(t%2)bit.push_back(tt);
    t/=2;
    tt*=2;
    maxorder++;
    i++;
  }

  if(n==0){
    cout << 0 << endl;
    return 0;
  }else if(bit.size()==1){
    cout << 0 << endl;
    cout << bit[0] << endl;
    return 0;
  }

  vector<vector<ll>> dp(bit.size()+1);
  map<ll,ll> mp;
  dp[0].push_back(0);
  dp[0].push_back(bit[0]);
  for(int i=1;i<bit.size();i++){
    for(int j=0;j<dp[i-1].size();j++){
      ll a=dp[i-1][j];
      ll b=dp[i-1][j]+bit[i];
      dp[i].push_back(a);
      dp[i].push_back(b);
      mp[a]++;
      mp[b]++;
    }
  }

  for(auto v:mp){
    cout << v.first << endl;
  }


}
