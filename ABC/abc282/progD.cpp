#include <bits/stdc++.h>
#include <vector>
using namespace std;

int n,m;
vector<vector<int>> edge;
vector<int> dist;
vector<int> depth;
map<int,vector<int>> depth_bin;
bool falg=false;

void dfs(int now, int now_depth){
  // cout << "now:" << now << endl;
  dist[now]++;
  depth[now]=now_depth;
  depth_bin[now_depth%2].push_back(now);
  for(auto nv:edge[now]){
    if(dist[nv]!=-1)continue;
    dfs(nv, now_depth+1);
  }
}

int main(){

  cin >> n >> m;

  edge.resize(n);
  dist.resize(n,-1);
  depth.resize(n);

  int u,v;
  for(int i=0;i<m;i++){
    cin >> u >> v;
    u--,v--;
    edge[u].push_back(v);
    edge[v].push_back(u);
  }

  // cout << "edge:" << endl;
  // for(int i=0;i<n;i++){
  //   cout << i << ":";
  //   for(auto v:edge[i])cout << " " << v;
  //   cout << endl;
  // }

  dfs(0,0);

  long long ans=(long long)(depth_bin[0].size())*(long long)(depth_bin[1].size());
  // cout << "depth_bin[0]:" << depth_bin[0].size() << endl;
  // cout << "depth_bin[1]:" << depth_bin[1].size() << endl;
  // cout << ans << endl;
  ans-=(long long)m;
  if(ans<0)ans=0;

  cout << ans << endl;


}
