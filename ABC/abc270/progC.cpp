#include<bits/stdc++.h>
using namespace std;

int n,x,y;
vector<vector<int>> edge;
vector<int> dist;

void dfs(int now, vector<int> &trace){

  dist[now]++;

  if(now==y){
    for(auto v:trace)cout << v+1 << " ";cout << endl;
    return;
  }

  for(auto v:edge[now]){
    if(dist[v])continue;
    trace.push_back(v);
    dfs(v, trace);
    trace.pop_back();
  }

}

int main(){

  cin >> n >> x >> y;
  x--;y--;

  edge.resize(n);
  dist.resize(n);

  int u,v;
  for(int i=0;i<n-1;i++){
    cin >> u >> v;
    u--,v--;
    edge[u].push_back(v);
    edge[v].push_back(u);
  }
  vector<int> trace={x};
  dfs(x, trace);
}



