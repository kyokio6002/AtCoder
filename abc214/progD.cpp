#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<vector<int>> dp(n,vector<int>(n,1001001001));
  int u,v,w;
  for(int i=0;i<n-1;i++){
    cin >> u >> v >> w;
    u--,v--;
    dp[min(u,v)][max(u,v)]=w;
  }
  for(int i=0;i<n;i++)dp[i][i]=0;


  for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
      }
    }
  }

  int ans=0;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      ans+=dp[i][j];
    }
  }

  cout << ans << endl;

}
