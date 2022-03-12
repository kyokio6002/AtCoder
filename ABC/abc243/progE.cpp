#include<bits/stdc++.h>
using namespace std;

struct line{
  int to;
  int cost;
};

int main(){

  int n,m;
  cin >> n >> m;
  vector<vector<line>> edge(n);
  int a,b,c;
  for(int i=0;i<m;i++){
    cin >> a >> b >> c;
    a--,b--;
    edge[a].push_back({b,c});
    edge[b].push_back({a,c});
  }

  vector<int> d_list; 
  for(int i=0;i<n;i++)if(edge[i].size()!=1)d_list.push_back(i);

  // save
  vector<vector<int>> dist(n,vector<int>(n));
  // check
  vector<vector<int>> inst_dist(n,vector<int>(n));

  // ワーシャルフロイド法
  for (int k = 0; k < n; k++){
    for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
  }
  

  for(int i=0)

}
