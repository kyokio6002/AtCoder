#include<bits/stdc++.h>
using namespace std;

#define INF 2000000000

int main(){

  int N;
  cin >> N;

  vector<int> dp(N,INF);
  vector<int> h(N);
  for(int i=0;i<N;i++){
    cin >> h[i];
  }

  dp[0]=0;

  for(int i=0;i<N;i++){
    if(i==N-1){
      cout << dp[N-1] << endl;
    }else if(i==N-2){
      //i+1
      dp[i+1]=min(dp[i+1],dp[i]+abs(h[i]-h[i+1]));
    }else{
      //i+1
      dp[i+1]=min(dp[i+1],dp[i]+abs(h[i]-h[i+1]));
      //i+2
      dp[i+2]=min(dp[i+2],dp[i]+abs(h[i]-h[i+2]));
    }
  }
}
