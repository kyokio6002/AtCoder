#include<bits/stdc++.h>
using namespace std;

vector<int> dist;
vector<int> start;
vector<vector<int>> edge;
bool ans=0;

void dfs(int from,int now){

  dist[now]++;
  start[now]=0;
  
  // cout << "now:" << now+1 << endl;

  for(auto to:edge[now]){
    if(dist[to]){
      if(to!=from){
        ans=true;
        return;
      }
      continue;
    }
    dfs(now,to);
    if(ans)return;
  }
}

int main(){

  int n,m;
  int a,b;
  cin >> n >> m;
  dist.resize(n);
  edge.resize(n);
  start.resize(n);

  for(int i=0;i<m;i++){
    cin >> a >> b;
    a--,b--;
    edge[a].push_back(b);
    edge[b].push_back(a);
    start[a]++;
    start[b]++;
  }
  for(int i=0;i<edge.size();i++){
    // cout << i << ":" << edge[i].size() << endl;
    if(edge[i].size()>2){
      cout << "No" << endl;
      return 0;
    }
  }

  for(int i=0;i<n;i++){
    if(start[i])dfs(-1,i);
  }

  if(ans)cout << "No" << endl;
  else cout << "Yes" << endl;
}
