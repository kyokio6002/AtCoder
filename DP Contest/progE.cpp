#include<bits/stdc++.h>
using namespace std;

#define INF 2000000000
#define MAX_sumV 100000

struct obj{
  int weight,value;
  obj(int weight=0,int value=0): weight(weight),value(value) {}
};

using ll=long long;

int main(){

  int N,W;
  cin >> N >> W;

  vector<obj> objct(N);
  for(int i=0;i<N;i++){
    cin >> objct[i].weight >> objct[i].value;
  }

  vector<vector<ll>> dp(N+1,vector<ll>(MAX_sumV+1,INF));
  dp[0][0]=0;

  for(int i=0;i<N;i++){
    for(ll sum_V=0;sum_V<=MAX_sumV;sum_V++){
      //obj[i]を選ぶ場合
      if(sum_V>=objct[i].value){
        dp[i+1][sum_V]=min(dp[i][sum_V],dp[i][sum_V-objct[i].value]+objct[i].weight);
      }else{
        dp[i+1][sum_V]=dp[i][sum_V];
      }
    }
  }



  ll ans;
  for(int sum_V=0;sum_V<=MAX_sumV;sum_V++){
    if(dp[N][sum_V]<=W){
      ans=sum_V;
    }
  }

  cout << ans << endl;
}
