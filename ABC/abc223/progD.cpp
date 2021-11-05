#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> edge;
int flag=0;
vector<int> dist;
vector<int> root;

void dfs(int x){
  if(flag)return;
  int count=0;
  // for(int i=0;i<root.size();i++)cout << root[i] << ",";
  // cout << endl;
  for(int i=0;i<n;i++){
    if(dist[i]==1)count++;
    else {
      for(auto v:edge[x]){
        if(dist[v]==0)return;
      }

      dist[i]=1;
      root.push_back(i);
      dfs(i);
      dist[i]=0;
      root.erase(root.end()-1);
      if(flag)return;
    }
  }
  if(count==n){
    // cout << "ans:";
    for(int i=0;i<n;i++)cout << root[i]+1 << " ";
    cout << endl;
    flag=1;
  }
  return;
}


int main(){
  cin >> n >> m;
  edge.resize(n);
  int a,b;
  for(int i=0;i<m;i++){
    cin >> a >> b;
    a--,b--;
    edge[b].push_back(a);
  }
  dist.resize(n);
  for(int i=0;i<n;i++){
    dist[i]=1;
    root.push_back(i);
    dfs(i);
    dist[i]=0;
    root.erase(dist.end()-1);
  }

  if(!flag)cout << -1 << endl;
}
