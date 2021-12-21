#include<bits/stdc++.h>
using namespace std;

int main(){

  int h,w;
  cin >> h >> w;
  vector<vector<int>> mp(w,vector<int>(h));
  vector<vector<int>> dist(w,vector<int>(h));
  char c;
  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> c;
      if(c=='.')mp[x][y]=1;
    }
  }

  int ans=0;
  queue<pair<int,int>> que;
  que.push(make_pair(0,0));
  pair<int,int> p;
  dist[0][0]=1;
  int x,y;
  int next_x,next_y;
  while(!que.empty()){
    p=que.front();
    que.pop();
    x=p.first;
    y=p.second;
    // cout << x << "," << y << endl;
    ans=max(ans,dist[x][y]);

    vector<pair<int,int>> dir={{0,1},{1,0}};
    for(int i=0;i<2;i++){
      next_x=x+dir[i].first;
      next_y=y+dir[i].second;
      if(next_x<0 || next_x>=w || next_y<0 || next_y>=h)continue;
      if(!mp[next_x][next_y])continue;
      if(dist[next_x][next_y])continue;
      que.push(make_pair(next_x,next_y));
      dist[next_x][next_y]=dist[x][y]+1;
    }
  }

  cout << ans << endl;
}
