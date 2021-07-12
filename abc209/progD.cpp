#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n,q;
  cin >> n >> q;

  int INF=1001001007;
  vector<vector<int>> dp(n,vector<int>(n,INF));
  for(int i=0;i<n;i++)dp[i][i]=0;
  int a,b;
  for(int i=0;i<n-1;i++){
    cin >> a >> b;
    a--,b--;
    dp[a][b]=1;
    dp[b][a]=1;
  }


  for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
      }
    }
  }

  int c,d;
  int ans;
  for(int i=0;i<q;i++){
    cin >> c >> d;
    c--,d--;
    ans=dp[c][d]%2;
    if(ans)cout << "Road" << endl;
    else cout << "Town" << endl;
  }
}
