#include<bits/stdc++.h>
using namespace std;

vector<int> dp;
vector<vector<int>> edge;

int rec(int v){

  cout << "rec入りました:" << v+1 << endl;
  for(int i=0;i<dp.size();i++) cout << "i:" << dp[i] << endl;
  if(dp[v]!=-1){
    cout << "探索済なのでreturnします" << endl;
    return dp[v];
  }

  int ans=0;
  for(auto to:edge[v]){
    cout << "行ける点で再帰をします" << endl;
    ans=max(ans,rec(to)+1);
  }
  cout << "行ける点なくなったからreturnします" << endl;
  return dp[v]=ans;
}

int main(){

  int N,M;
  cin >> N >> M;

  edge=vector<vector<int>>(N);
  dp=vector<int>(N,-1);
  int now,to;
  for(int i=0;i<M;i++){
    cin >> now >> to;now--;to--;
    edge[now].push_back(to);
  }

  int ans = 0;
  for(int i=0;i<N;i++){
    ans = max(ans,rec(i));
  }

  cout << ans << endl;

}
