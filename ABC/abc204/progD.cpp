#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> T(n);
  int sum=0;
  for(int i=0;i<n;i++)cin >> T[i];
  for(int i=0;i<n;i++)sum+=T[i];
  
  vector<vector<int>> dp(n,vector<int>(sum));

  dp[0][0]++;
  for(int i=0;i<n-1;i++){
    dp[i][T[i]]++;
    for(int t=0;t<sum;t++){
      if(dp[i][t]){
        dp[i+1][t+T[i+1]]++;
        dp[i+1][t]++;
      }
    }
  }

  int ans=sum;
  int ansf;
  // cout << "sum:" << sum << endl;
  for(int t=0;t<sum;t++){
    if(dp[n-1][t]){
      if(ans>=abs(2*t-sum))ansf=max(t,sum-t);
      ans=abs(2*t-sum);
      // cout << "t:" << t << endl;
      // cout << "abs:" << abs(2*t-sum) << endl;
      // cout << "ans:" << ans << endl;
      // cout << "ansf:" << ansf << endl << endl;
    }
  }

  cout << ansf << endl;

}
