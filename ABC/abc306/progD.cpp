#include <iostream>
#include <vector>
using namespace std;

int main(){

  int n;
  cin >> n;

  // -1:存在しない状態、0:お腹を下していない、1:お腹を下している
  vector<vector<long long>> dp(n+1,vector<long long>(2,0));
  // 最初は0:お腹を下していない
  dp[0][0]=0;

  long long x,y;
  for(int i=1;i<=n;i++){

    cin >> x >> y;

    // 解毒入り
    if(x==0){
      // お腹痛くない、食べる
      dp[i][0]=max(dp[i][0],dp[i-1][0]+y);
      // お腹痛い、食べる
      dp[i][0]=max(dp[i][0],dp[i-1][1]+y);
      // お腹くない、食べない
      dp[i][0]=max(dp[i][0],dp[i-1][0]);
      // お腹痛い、食べない
      dp[i][1]=max(dp[i][1],dp[i-1][1]);
    }
    // 毒入り
    else{
      // お腹痛くない、食べる
      dp[i][1]=max(dp[i][1],dp[i-1][0]+y);
      // お腹痛い、食べる
      // dp[i][1]=max(dp[i][1],dp[i-1][1]+y);
      // お腹痛くない、食べない
      dp[i][0]=max(dp[i][0],dp[i-1][0]);
      // お腹痛い、食べない
      dp[i][1]=max(dp[i][1],dp[i-1][1]);
    }

  }

  cout << max(dp[n][0],dp[n][1]) << endl;
}
