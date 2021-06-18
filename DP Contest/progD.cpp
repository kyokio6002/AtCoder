#include<bits/stdc++.h>
using namespace std;


#define INF 2000000000

using ll=long long;

int main(){

  int N,W;
  cin >> N >> W;

  vector<vector<ll>> dp(N+1,vector<ll>(W+1,-INF));
  vector<pair<int,int>> obj(N);
  for(int i=0;i<N;i++){
    cin >> obj[i].first >> obj[i].second;
  }

  for(int i=0;i<=W;i++) dp[0][i]=0;

  for(int i=0;i<N;i++){
    for(int w=0;w<=W;w++){
      cout << "i:" << i << " w:" << w << endl;
      if(w>=obj[i].first){
        dp[i+1][w]=max(dp[i][w],dp[i][w-obj[i].first]+obj[i].second);
      }else{
        dp[i+1][w]=dp[i][w];
      }
    }
  }

  cout << dp[N][W] << endl;
}
