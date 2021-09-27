#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  bitset<100001> dp;
  int t;
  int sum=0;
  dp[0]=1;  // dp=<..000001>
  for(int i=0;i<n;i++){
    cin >> t;
    sum+=t;
    dp |= dp<<t;  // dp = dp|(dp<<t)
  }

  int ans=100001;
  for(int t=0;t<sum;t++)if(dp[t])ans=min(ans,max(t,sum-t));

  cout << ans << endl;
}
