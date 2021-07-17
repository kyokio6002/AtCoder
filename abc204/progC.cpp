#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> edge;
vector<vector<int>> dist;
int ans=0;

void dfs(int start,int v){
  dist[start][v]++;
  for(auto nv:edge[v]){
    if(dist[start][nv])continue;
    // cout << "start:" << start+1 << endl;
    // cout << "nv:" << nv+1 << endl << endl;
    ans++;
    dfs(start,nv);
  }
  return;
}


int main(){

  int n,m;
  cin >> n >> m;

  edge.resize(n);
  dist.resize(n,vector<int>(n));

  int a,b;
  for(int i=0;i<m;i++){
    cin >> a >> b;
    a--,b--;
    edge[a].push_back(b);
  }

  ans+=n;
  for(int i=0;i<n;i++){
    dfs(i,i);
  }

  cout << ans << endl;
}
