#include<bits/stdc++.h>
using namespace std;

#define mod 998244353
using ll=long long;

int main(){

  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for(int i=0;i<n;i++)cin >> a[i];
  for(int i=0;i<n;i++)cin >> b[i];
  ll ans=0;
  map<ll,ll> mp; // mp[i]=iまでのパターン総和
  mp[a[0]]=1;
  for(int i=a[0]+1;i<=b[0];i++)mp[i]=mp[i-1]+1;
  vector<vector<ll>> dp(n,vector<ll>(3003));
  for(int i=a[0];i<=b[0];i++)dp[0][i]=1;

  // dp[i][j]:i+1個見たときのCiのパターン数
  for(int i=1;i<n;i++){
    map<ll,ll> mp_n;
    // cout << "mp:";
    // for(int t=a[i-1];t<=b[i-1];t++)cout << mp[t] << ",";
    // cout << endl;
    // cout << "mp.max:" << mp.rbegin()->first << endl;
    
    for(int j=a[i];j<=b[i];j++){
      if((mp.rbegin()->first)<=j)dp[i][j]=mp.rbegin()->second;
      else dp[i][j]=mp[j];
      mp_n[j]=(mp_n[j-1]+dp[i][j])%mod;
    }
    mp=mp_n;

    // cout << "dp:";
    // for(int t=a[i];t<=b[i];t++)cout << dp[i][t] << ",";
    // cout << endl << endl;
  }

  // for(int i=0;i<3003;i++)cout << i+1 << ":" << dp[n-1][i] << endl;
  // for(int i=0;i<n;i++){
  //   for(int j=1;j<=3;j++){
  //     cout << dp[i][j] << ",";
  //   }cout << endl;
  // }

  for(int i=0;i<3003;i++)ans=(ans+dp[n-1][i])%mod;
  cout << ans << endl;

}
