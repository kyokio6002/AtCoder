#include<bits/stdc++.h>
#include <utility>
using namespace std;

map<pair<int,int>,int> edge;
map<pair<int,int>,int> dist;
int n;
int ans=0;

void dfs(int x,int y, int count, int color){

  dist[make_pair(x,y)]=color;

  cout << "now:" << x << "," << y << endl;

  vector<pair<int,int>> dire={
    {-1,-1},
    {-1,0},
    {0,-1},
    {0,1},
    {1,0},
    {1,1},
  };

  for(int i=0;i<6;i++){
    int nextx=x+dire[i].first;
    int nexty=y+dire[i].second;
    if(dist.count(make_pair(nextx,nexty)))continue;
    if(!edge.count(make_pair(nextx,nexty)))continue;
    
    dfs(nextx,nexty,count+1,color);
  }

}


int main(){

  cin >> n;
  int x,y;
  for(int i=0;i<n;i++){
    cin >> x >> y;
    pair<int,int> p={x,y};
    edge[p]++;
    edge[p]++;
  }

  int ans=0;
  for(auto v:edge){
    int x=v.first.first;
    int y=v.first.second;
    // if(dist.count(make_pair(x,y)))continue;
    dfs(x,y,1,ans);
    ans++;
  }

  cout << ans << endl;

}
