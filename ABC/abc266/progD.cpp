#include<bits/stdc++.h>
#include <vector>
using namespace std;

using ll=long long;

int main(){

  ll n;
  cin >> n;
  // time[t][i]:t秒目にi番目の穴から出てくるすぬけの大きさ
  map<ll,vector<int>> time;

  ll t,x,a;
  for(int i=0;i<n;i++){
    cin >> t >> x >> a;
    time[t][x]=a;  
  }

  // t秒後にiにいる時のmax
  vector<vector<ll>> dp(100005,vector<ll>(5));
  ll ans=0;

  for(auto tt:time){
    ll t=tt.first;
    for(int ana=0;ana<time[t].size();ana++){
      if(ana>t)continue;
      // cout << "t:" << t << endl;
      // cout << "ana:" << ana << endl;
      for(int subt=0;subt<t-ana;subt++){
        if(t-ana>=0)dp[t][ana]=max(dp[t][ana],dp[t-subt][0]);
        if(t-ana>=1)dp[t][ana]=max(dp[t][ana],dp[t-subt][1]);
        if(t-ana>=2)dp[t][ana]=max(dp[t][ana],dp[t-subt][2]);
        if(t-ana>=3)dp[t][ana]=max(dp[t][ana],dp[t-subt][3]);
        if(t-ana>=4)dp[t][ana]=max(dp[t][ana],dp[t-subt][4]);
      }
      cout << "ans:" << ans << endl;
    }
  }

  cout << ans << endl;
}
