#include <bits/stdc++.h>
#include <queue>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main(){

  int n,s;
  cin >> n >> s;
  vector<int> a(n);
  vector<int> b(n);
  for(int i=0;i<n;i++)cin >> a[i] >> b[i];

  vector<vector<pair<bool,string>>> dp(n,vector<pair<bool,string>>(s+1));
  dp[0][a[0]]=make_pair(true, "H");
  dp[0][b[0]]=make_pair(true, "T");
  for(int i=0;i<n-1;i++){
    for(int sum=0;sum<s+1;sum++){

      bool flag=dp[i][sum].first;
      if(!flag)continue;

      string trace=dp[i][sum].second;

      if(sum+a[i+1]<=s)dp[i+1][sum+a[i+1]]=make_pair(true,trace+'H');
      if(sum+b[i+1]<=s)dp[i+1][sum+b[i+1]]=make_pair(true,trace+'T');
    }
  }

  bool flag=dp[n-1][s].first;
  string trace=dp[n-1][s].second;
  if(!flag)cout << "No" << endl;
  else{
    cout << "Yes" << endl;
    cout << trace << endl;
  }

}
