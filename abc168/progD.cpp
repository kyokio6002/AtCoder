#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;

  vector<int> edge[n];

  for(int i=0;i<m;i++){
    int u,v;
    cin >> u >> v;u--;v--;
    edge[u].push_back(v);
    edge[v].push_back(u);
  }

  vector<int> dist(n,-1);
  queue<int> que;

  int start=0;
  que.push(start);
  dist[start]=0;

  while(!que.empty()){
    int now = que.front();
    que.pop();

    for(int to:edge[now]){
      if(dist[to]!=-1) continue;

      dist[to]=dist[now]+1;
      que.push(to);
    }
  }

  bool flag=1;

  for(int i=0;i<n;i++){
    if(dist[i]==-1){
      flag=0;
      break;
    }
  }

  if(flag==0) cout << "No" << endl;
  else{
    cout << "Yes" << endl;
    for(int i=1;i<n;i++){
      for(int to:edge[i]){
        if(dist[to]==dist[i]-1){
          cout << to+1 << endl;
          break;
        }
      }
    }
  }
}
