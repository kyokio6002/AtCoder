#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;
  vector<vector<int>> edge(n);
  for(int i=0;i<m;i++){
    int a,b;
    cin >> a >> b;a--,b--;
    edge[a].push_back(b);
    edge[b].push_back(a);
  }

  for(int i=0;i<n;i++)if(edge[i].size()!=2){
    cout << "No" << endl;
    return 0;
  }

  bool flag=true;
  vector<bool> dist(n,false);
  int current=0;
  while(true){
    dist[current]=true;
    // 両方行ったことある場合
    if(dist[edge[current][0]] && dist[edge[current][1]])break;

    current = !dist[edge[current][0]] 
      ? edge[current][0]
      : edge[current][1];
  }

  for(int i=0;i<n;i++){
    if(!dist[i])flag=false;
  }

  if(flag)cout << "Yes" << endl;
  else cout << "No" << endl;
}
