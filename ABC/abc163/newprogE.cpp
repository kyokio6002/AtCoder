#include<bits/stdc++.h>
using namespace std;

int main(){

  //入力受付
  long N;
  cin >> N;
  vector<pair<long,long> > A(N);//それぞれにactivenessとindexを入れる
  for(long i=0;i<N;i++){
    cin >> A[i].first;
    A[i].second = i;
    //cout << A[i].first << "," << A[i].second << endl;
  }

  //sort
  sort(A.rbegin(),A.rend());

  //cout << endl;
  for(long i=0;i<N;i++){
    //cout << A[i].first << "," << A[i].second << endl;
  }

  //int dp[N+1][N+1] = {0};
  vector<vector<long>> dp(N+1, vector<long>(N+1));
  //vector<vector<int>> dp(N+1,0);

  for(long l=0;l<N;l++){
    //初期値dp[0][0]を0に初期化
    dp[0][0] = 0;
    for(long r=0;r<N;r++){
      long index = A[l+r].second;
      long agressive = A[l+r].first;
      if(l+r>=N) {
      continue;
      }
      dp[l+1][r] = max(dp[l+1][r],dp[l][r] + agressive*abs(index - l));//左に入れる
      //cout << "dp[][]:" << l << ":" << r << " " << dp[l+1][r] << endl;
      dp[l][r+1] = max(dp[l][r+1],dp[l][r] + agressive*abs((N-1)- r - index));//右に入れる
      //cout << "dp[][]:" << l << ":" << r << " " << dp[l][r+1] << endl;
    }
    //cout << "ループ終わり" << endl;
  }
  long ans = 0;
  for(long i=0;i<N;i++){
    //cout << "dp[][]:" << dp[i][N-i] << endl;
    ans = max(ans,dp[i][N-i]);
  }

  //cout << "ans:" << ans << endl;
  cout<< ans << endl;
}
