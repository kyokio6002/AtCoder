#include<bits/stdc++.h>
using namespace std;

#define INF 2000000000

struct plan{
  int a,b,c;
  plan(int a=0,int b=0,int c=0): a(a),b(b),c(c) {}
};

int main(){

  int n;
  cin >> n;

  vector<plan> p(n);
  int a,b,c;
  for(int i=0;i<n;i++){
    cin >> a >> b >> c;
    p[i].a=a;
    p[i].b=b;
    p[i].c=c;
  }

  vector<vector<int>> dp(n+1,vector<int>(3,-1*INF));
  dp[0][0]=dp[0][1]=dp[0][2]=0;
  for(int i=0;i<n;i++){
    dp[i+1][0]=max(dp[i+1][0],max(dp[i][1]+p[i].a,dp[i][2]+p[i].a));
    dp[i+1][1]=max(dp[i+1][1],max(dp[i][0]+p[i].b,dp[i][2]+p[i].b));
    dp[i+1][2]=max(dp[i+1][2],max(dp[i][0]+p[i].c,dp[i][1]+p[i].c));
  }

  cout << max(dp[n][0],max(dp[n][1],dp[n][2])) << endl;

}
