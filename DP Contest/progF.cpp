#include<bits/stdc++.h>
using namespace std;

int main(){

  string s,t;
  cin >> s >> t;

  int s_len=s.length();
  int t_len=t.length();

  vector<vector<int>> dp(s_len+1,vector<int>(t_len+1,0));
  string ans="";

  for(int s_index=0;s_index<s_len;s_index++){
    for(int t_index=0;t_index<t_len;t_index++){
      if(s[s_index]==t[t_index]){
        dp[s_index+1][t_index+1]=max(dp[s_index+1][t_index+1],dp[s_index][t_index]+1);
        //dp[s_index+1][t_index+1]=dp[s_index][t_index]+1;
      }
      dp[s_index+1][t_index+1]=max(dp[s_index+1][t_index+1],dp[s_index+1][t_index]);
      dp[s_index+1][t_index+1]=max(dp[s_index+1][t_index+1],dp[s_index][t_index+1]);
    }
  }

  /*for(int i=1;i<=s_len;i++){
    for(int j=1;j<=t_len;j++){
      cout << dp[i][j];
    }
    cout << endl;
  }*/


  int s_index=s.length();
  int t_index=t.length();
  while(s_index>0 && t_index>0){
    if(dp[s_index-1][t_index]==dp[s_index][t_index]){
      s_index--;
    }else if(dp[s_index][t_index-1]==dp[s_index][t_index]){
      t_index--;
    }else{
      ans = s[s_index-1] + ans;
      s_index--;
      t_index--;
    }
  }

  cout << dp[s_len][t_len] << endl;
  cout << ans << endl;
}
