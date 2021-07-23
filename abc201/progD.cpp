#include<bits/stdc++.h>
using namespace std;

#define INF -1001001007

int main(){

  int h,w;
  cin >> h >> w;


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
  // vector<vector<int>> dp(w,vector<int>(h));

  // (x+y)%2==1 Takahashi
  // (x+y)%2==0 Aoki
  // Takahashi↑
  // Aoki↓
  if((w+h)%2)dp[w-1][h-1]=a[w-1][h-1];
  else dp[w-1][h-1]=-a[w-1][h-1];

  for(int y=h-1;y>=0;y--){
    for(int x=w-1;x>=0;x--){
      if(x+1<w){
        if((x+y)%2==1)dp[x][y]=max(dp[x][y],dp[x+1][y]+a[x][y]);
        else{
          if(dp[x][y]==INF)dp[x][y]=dp[x+1][y]-a[x][y];
          else dp[x][y]=min(dp[x][y],dp[x+1][y]-a[x][y]);
        }
      }
      if(y+1<h){
        if((x+y)%2==1)dp[x][y]=max(dp[x][y],dp[x][y+1]+a[x][y]);
        else{
          if(dp[x][y]==INF)dp[x][y]=dp[x][y+1]-a[x][y];
          else dp[x][y]=min(dp[x][y],dp[x][y+1]-a[x][y]);
        }
      }
    }
  }


  // for(int y=0;y<h;y++){
  //   for(int x=0;x<w;x++){
  //     cout << dp[x][y] << " ";
  //   }cout << endl;
  // }

  int ans;
  if(h>=2 && w>=2)ans=max(dp[0][1],dp[1][0]);
  else if(h<2 && w>=2)ans=dp[1][0];
  else if(w<2 && h>=2)ans=dp[0][1];
  else ans=0;

  if(ans>0)cout << "Takahashi" << endl;
  else if(ans==0)cout << "Draw" << endl;
  else cout << "Aoki" << endl;

}
