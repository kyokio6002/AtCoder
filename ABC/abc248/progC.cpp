#include<bits/stdc++.h>
using namespace std;

#define mod 998244353
using ll=long long;

int main(){

  ll n,m,k;
  cin >> n >> m >> k;

  // dp[i][j]:i個選んだ時に総和がjになるパターン数
  vector<vector<ll>> dp(n,vector<ll>(k+1));

  for(int i=1;i<=m;i++)dp[0][i]=1;

  for(int i=0;i<n-1;i++){
    for(int now=1;now<=k;now++){
      for(int add=1;add<=m;add++){
        if(now+add>k)continue;
        dp[i+1][now+add]=(dp[i+1][now+add]+dp[i][now])%mod;
      }
    }
  }
  
  // // for(int i=0;i<=k+3;i++)cout << "-";
  // // cout << endl;
  // for(int j=1;j<=k;j++){
  //   // cout << j << "|";
  //   for(int i=0;i<n;i++){
  //     cout << dp[i][j] << ",";
  //   }cout << endl;
  // }

  ll ans=0;
  for(int i=1;i<=k;i++)ans=(ans+dp[n-1][i])%mod;
  cout << ans << endl;
}
