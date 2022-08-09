#include<bits/stdc++.h>
#include <vector>
using namespace std;

#define mod 998244353
using ll=long long;

int main(){

  int n;
  cin >> n;
  ll ans=0;

  int nmax=10;

  vector<vector<ll> > dp(n+1,vector<ll>(nmax));
  for(int i=0;i<10;i++)dp[0][i]=1;

  for(int i=0;i<n;i++){
    for(int j=1;j<nmax;j++){
      if(j!=1)dp[i+1][j]=(dp[i+1][j]+dp[i][j-1])%mod;
      
      if(1)dp[i+1][j]=(dp[i+1][j]+dp[i][j])%mod;

      if(j!=9)dp[i+1][j]=(dp[i+1][j]+dp[i][j+1])%mod;
    }
  }


  for(int i=1;i<=9;i++){
    ans=(ans+dp[n-1][i])%mod;
  }
  cout << ans << endl;
}
