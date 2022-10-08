#include<bits/stdc++.h>
#include <utility>
#include <vector>
using namespace std;

int n;
long long m;

void check_dist(vector<pair<int, int>> &add_dist){
  for(int y=-n;y<n;y++){
    for(int x=-n;x<n;x++){
      int dist=x*x+y*y;
      if(dist==m)add_dist.push_back(make_pair(x,y));
    }
  }
}

int main(){

  cin >> n >> m;

  vector<vector<int>> dist(n,vector<int>(n,-1));
  queue<pair<int,int>> que; // 距離, コスト
  que.push(make_pair(0,0));
  dist[0][0]=0;
  vector<pair<int,int>> add_dist;
  check_dist(add_dist);
  
  while(!que.empty()){
    int x=que.front().first;
    int y=que.front().second;
    que.pop();

    for(int i=0;i<add_dist.size();i++){
      int nx=x+add_dist[i].first;
      int ny=y+add_dist[i].second;
      if(nx<0 || nx>=n)continue;
      if(ny<0 || ny>=n)continue;

      if(dist[nx][ny]!=-1)continue;

      dist[nx][ny]=dist[x][y]+1;
      que.push(make_pair(nx, ny));
    }
  }

  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++){
      cout << dist[x][y] << " ";
    }cout << endl;
  }
  
}
