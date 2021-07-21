#include<bits/stdc++.h>
using namespace std;

#define INF -1001001007

int main(){

  int h,w;
  cin >> h >> w;

  if(w==1 && h==1){
    cout << "Drow" << endl;
    return 0;
  }

  vector<vector<int>> a(w,vector<int>(h));
  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      char c;
      cin >> c;
      if(c=='+')a[x][y]=1;
      else a[x][y]=-1;
    }
  }

  vector<vector<int>> dp(w,vector<int>(h,INF));

  // (x+y)%2==1 Takahashi
  // (x+y)%2==0 Aoki
  // Takahashi↑
  // Aoki↓
  if((w+h)%2)dp[w-1][h-1]=a[w-1][h-1];
  else dp[w-1][h-1]=-a[w-1][h-1];

  for(int y=h-1;y>=0;y--){
    for(int x=w-1;x>=0;x--){
      if(x-1>=0){
        if((x+y)%2)dp[x-1][y]=max(dp[x-1][y],dp[x][y]+a[x-1][y]);
        else{
          if(dp[x-1][y]==INF)dp[x-1][y]=dp[x][y]-a[x-1][y];
          else dp[x-1][y]=min(dp[x-1][y],dp[x][y]-a[x-1][y]);
        }
      }
      if(y-1>=0){
        if((x+y)%2)dp[x][y-1]=max(dp[x][y-1],dp[x][y]+a[x][y-1]);
        else{
          if(dp[x][y-1]==INF)dp[x][y-1]=dp[x][y]-a[x][y-1];
          else dp[x][y-1]=min(dp[x][y-1],dp[x][y]-a[x][y-1]);
        }
      }
    }
  }


  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cout << dp[x][y] << " ";
    }cout << endl;
  }


  if(dp[0][0]>0)cout << "Takahashi" << endl;
  else if(dp[0][0]==0)cout << "Drow" << endl;
  else cout << "Aoki" << endl;

}
