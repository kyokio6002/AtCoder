#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){
  int n;
  ll k;
  cin >> n >> k;
  vector<ll> a(n);
  vector<ll> sum(n);
  map<ll,int> mp;
  int ans=0;

  for(int i=0;i<n;i++){
    cin >> a[i];
    if(i==0)sum[i]=a[i];
    else sum[i]=sum[i-1]+a[i];
  }

  vector<vector<int>> dp(n,vector<int>(k+2));
  dp[0][a[0]]++;
  for(int i=0;i<n;i++){
    
  }

  cout << ans << endl;

}
