#include<bits/stdc++.h>
using namespace std;

#define INF 1000000007
using ll = long long;

int main(){

  int n,m;
  cin >> n >> m;
  vector<vector<int>> dp(n,vector<int>(n,INF));
  for(int i=0;i<n;i++)dp[i][i]=0;

  int a,b,c;
  for(int i=0;i<m;i++){
    cin >> a >> b >> c;
    a--,b--;
    dp[a][b]=c;
  }

  ll ans=0;
  for(int k=0;k<n;k++){
    for(int s=0;s<n;s++){
      for(int t=0;t<n;t++){
        dp[s][t]=min(dp[s][t],dp[s][k]+dp[k][t]);
        if(dp[s][t]==INF)continue;
        ans+=dp[s][t];
      }
    }
  }

  cout << ans << endl;

}
