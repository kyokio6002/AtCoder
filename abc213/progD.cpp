#include<bits/stdc++.h>
using namespace std;


vector<map<int,int>> edge;
vector<int> dist;
int flag=0;

void dfs(int v){

  dist[v]++;
  cout << v+1 << endl;
  for(auto nv:edge[v]){
    if(dist[nv.first]!=0)continue;
    dfs(nv.first);
    cout << v+1 << endl;
    if(flag)return;
  }

  if(v==0){
    flag++;
    return;
  }

}

int main(){

  int n;
  cin >> n;
  edge.resize(n);
  dist.resize(n);

  for(int i=0;i<n-1;i++){
    int a,b;
    cin >> a >> b;
    a--,b--;
    edge[a][b]++;
    edge[b][a]++;
  }

  dfs(0);

}
