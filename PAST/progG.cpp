#include<bits/stdc++.h>
using namespace std;

using P = pair<int,int>;

int main(){

  int  n,goalx,goaly;
  cin >> n >> goalx >> goaly;

  map<P,char> mp;
  map<P,int> dist;

  int goX[6]={1,0,-1,1,-1,0};
  int goY[6]={1,1,1,0,0,-1};

  for(int x=-205;x<=205;x++){
    for(int y=-205;y<=205;y++){
      mp[{x,y}]='o';
      dist[{x,y}]=-1;
    }
  }

  int wallX,wallY;
  for(int i=0;i<n;i++){
    cin >> wallX >> wallY;
    mp[{wallX,wallY}]='#';
  }

  queue<P> que;
  dist[{0,0}]=0;
  que.push(P(0,0));

  while(!que.empty()){
    int dx = que.front().first;
    int dy = que.front().second;
    que.pop();

    for(int i=0;i<6;i++){
      if(dx+goX[i]<-205 || dx+goX[i]>205 || dy+goY[i]> 205 || dy+goY[i]< -205) continue;
      if(mp[{dx+goX[i],dy+goY[i]}]=='#') continue;
      if(dist[{dx+goX[i],dy+goY[i]}]==-1 && mp[{dx+goX[i],dy+goY[i]}]=='o'){
        dist[{dx+goX[i],dy+goY[i]}]=dist[{dx,dy}]+1;
        que.push(P(dx+goX[i],dy+goY[i]));
      }
    }
  }
  cout << dist[{goalx,goaly}] << endl;
}
