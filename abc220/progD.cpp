#include<bits/stdc++.h>
using namespace std;

#define mod 998244353
using ll=long long;

int main(){

  int n;
  cin >> n;
  vector<ll> a(n);
  for(int i=0;i<n;i++)cin >> a[i];

  vector<vector<ll>> dp(n+10,vector<ll>(11));
  ll n1=(a[0]+a[1])%10;
  ll n2=(a[0]*a[1])%10;
  a.erase(a.begin());
  a.erase(a.begin());

  // cout << "n1:" << n1 << endl;
  // cout << "n2:" << n2 << endl;
  dp[1][n1]++;
  dp[1][n2]++;

  for(int i=1;i<n-1;i++){
    for(int r=0;r<10;r++){
      n1=(r+a[0])%10;
      n2=(r*a[0])%10;
      // cout << "i:" << i << endl;
      // if(dp[i][r]>0){
      //   cout << "a:" << a[0] << endl;
      //   cout << "n1:" << n1 << endl;
      //   cout << "n2:" << n2 << endl;
      // }
      dp[i+1][n1]=(dp[i+1][n1]+dp[i][r])%mod;
      dp[i+1][n2]=(dp[i+1][n2]+dp[i][r])%mod;
    }
    if(a.size()>=1)a.erase(a.begin());
  }
  // for(int i=0;i<10;i++)cout << i << " ";
  // cout << endl;
  // cout << "-----------------------" << endl;
  // for(int i=1;i<n;i++){
  //   for(int j=0;j<10;j++){
  //     cout << dp[i][j] << " ";
  //   }cout << endl;
  // }

  for(int i=0;i<10;i++){
    cout << dp[n-1][i] << endl;
  }

}
