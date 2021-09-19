#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  int x,y;
  cin >> x >> y;

  vector<int> a(n);
  vector<int> b(n);
  for(int i=0;i<n;i++)cin >> a[i] >> b[i];

  vector<vector<vector<int>>> dp(n+2,vector<vector<int>>(x+1,vector<int>(y+1,-1)));

  for(int i=0;i<=n;i++){
    for(int xs=0;xs<=x;xs++){
      for(int ys=0;ys<=y;ys++){
        // 常に最小
        dp[i+1][min(x,a[i])][min(y,b[i])]=1;

        // そのままの値を更新
        if(dp[i][xs][ys]>0){
          if(dp[i+1][xs][ys]>0)dp[i+1][xs][ys]=min(dp[i+1][xs][ys],dp[i][xs][ys]);
          else dp[i+1][xs][ys]=dp[i][xs][ys];
        }

        // 追加して更新
        if(dp[i][xs][ys]>0){
          int nxs=min(x,xs+a[i]);
          int nys=min(y,ys+b[i]);
          if(dp[i+1][nxs][nys]>0){
            dp[i+1][nxs][nys]=min(dp[i+1][nxs][nys],dp[i][xs][ys]+1);
          }else{
            dp[i+1][nxs][nys]=dp[i][xs][ys]+1;
          }
        }
      }
    }
  }

  if(dp[n][x][y]>0)cout << dp[n][x][y] << endl;
  else cout << -1 << endl;
}
