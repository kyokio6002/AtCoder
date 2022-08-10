#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> b(n);
  vector<vector<int>> dp(n,vector<int>(2));

  for(int i=0;i<n;i++)cin >> a[i];
  for(int i=0;i<n;i++)cin >> b[i];

  dp[0][0]=1;
  dp[0][1]=1;
  // 今と次で判定
  for(int i=0;i<n-1;i++){
    for(int ab=0;ab<2;ab++){
      // 可能性なしはcontinue
      if(!dp[i][ab])continue;

      for(int nab=0;nab<2;nab++){
        // 選択可能
        if(!nab){
          if(!ab){
            if(abs(a[i]-a[i+1])<=k)dp[i+1][nab]++;
            // if(abs(a[i]-a[i+1])<=k){
            //   dp[i+1][nab]++;
            //   vector<char> cc{'a','b'};
            //   printf("add00(%d):%c->%c\n",i+1,cc[ab],cc[nab]);
            // }
          }else{
            if(abs(b[i]-a[i+1])<=k)dp[i+1][nab]++;
            // if(abs(b[i]-a[i+1])<=k){
            //   dp[i+1][nab]++;
            //   vector<char> cc{'a','b'};
            //   printf("add01(%d):%c->%c\n",i+1,cc[ab],cc[nab]);
            // }
          }
        }else{
          if(!ab){
            if(abs(a[i]-b[i+1])<=k)dp[i+1][nab]++;
            // if(abs(a[i]-b[i+1])<=k){
            //   dp[i+1][nab]++;
            //   vector<char> cc{'a','b'};
            //   printf("add10(%d):%c->%c\n",i+1,cc[ab],cc[nab]);
            // }
          }else{
            if(abs(b[i]-b[i+1])<=k)dp[i+1][nab]++;
            // if(abs(b[i]-b[i+1])<=k){
            //   dp[i+1][nab]++;
            //   vector<char> cc{'a','b'};
            //   printf("add11(%d):%c->%c\n",i+1,cc[ab],cc[nab]);
            // }
          }
        }
      }
    }
  }

  // for(int i=0;i<2;i++){
  //   for(int j=0;j<n;j++){
  //     cout << dp[j][i] << " ";
  //   }cout << endl;
  // }

  if(dp[n-1][0]+dp[n-1][1])cout << "Yes" << endl;
  else cout << "No" << endl;

}
