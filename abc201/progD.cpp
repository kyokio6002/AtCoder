#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int h,w;
  cin >> h >> w;
  char c;
  int notyet = -1000000007;
  vector<vector<int>> a(w,vector<int>(h));
  vector<vector<int>> dp(w,vector<int>(h,notyet));
  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> c;
      if(c=='+')a[x][y]++;
      else a[x][y]--;
    }
  }
  if(h==1 && w==1){
    cout << "Draw" << endl;
    return 0;
  }
  int point;
  dp[w-1][h-1]=-1*a[w-1][h-1];
  for(int y=h-1;y>=0;y--){
    for(int x=w-1;x>=0;x--){
      if(x-1>=0){
        point=a[x-1][y];
        if((x+y)%2==1) point*=-1;//aokiのターンの場合は-
        dp[x-1][y]=max(dp[x-1][y],dp[x][y]+point);
      }
      if(y-1>=0){
        point=a[x][y-1];
        if((x+y)%2==1) point*=-1;
        dp[x][y-1]=max(dp[x][y-1],dp[x][y]+point);
      }
    }
  }

  //for(int y=0;y<h;y++){
  //  for(int x=0;x<w;x++){
  //    cout << dp[x][y] << " ";
  //  }cout << endl;
  //}
  //cout << "dp[0][0]:" << dp[0][0] << endl;
  //cout << "dp[0][1]:" << dp[0][1] << endl;
  //cout << "dp[1][0]:" << dp[1][0] << endl;
  int ans;
  if(h==0)ans=dp[1][0];
  else if(w==0)ans=dp[0][1];
  else ans=max(dp[0][1],dp[1][0]);
  if(ans==0) cout << "Draw" << endl;
  else if(ans>0) cout << "Takahashi" << endl;
  else cout << "Aoki" << endl;

}
