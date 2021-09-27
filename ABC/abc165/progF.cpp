#include<bits/stdc++.h>
using namespace std;

#define MAX_N 200005
#define INF 1001001001

vector<int> a,ans;
vector<int> edge[MAX_N];
int dp[MAX_N];

//最初は0からで親はいないから
void dfs(int v,int p=-1){
  int i = lower_bound(dp,dp+MAX_N,a[v]) - dp;//indexを求める
  int save = dp[i];//再起で戻る時に追加した値を元に戻しておく
  dp[i] = a[v];

  ans[v] = lower_bound(dp,dp+MAX_N,INF) - dp - 1;

  //現在の場所vから行ける場所をuとする
  for(auto u: edge[v]){
    if(u==p) continue;//親には行かない
    dfs(u,v);//現在の場所をu,親をvとしてdfsする
  }

  dp[i] = save;
}


int main(){

  int N;
  cin >> N;
  a.resize(N);
  ans.resize(N);

  for(int i=0;i<N;i++) cin >> a[i];

  for(int i=0;i<N-1;i++){
    int u,v;
    cin >> u >> v;u--;v--;
    edge[u].push_back(v);
    edge[v].push_back(u);
  }

  for(int i=0;i<MAX_N;i++) dp[i]=INF;
  dp[0]=-INF;

  dfs(0);

  for(int i=0;i<N;i++) cout << ans[i] << endl;
}
