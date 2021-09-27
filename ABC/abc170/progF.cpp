#include<bits/stdc++.h>
using namespace std;

int main(){

  int  height,width,K;
  cin >> height >> width >> K;

  int startX,startY;
  int goalX,goalY;
  cin >> startY >> startX;startX--;startY--;
  cin >> goalY >> goalX;goalX--;goalY--;

  //BFS
  queue<pair<int,int>> que;
  que.push({startX,startY});
  vector<vector<int>> dist(width,vector<int>(height,-1));
  dist[startX][startY]=0;
  int dx,dy;
  pair<int,int> P;
  vector<vector<char>> mp(width,vector<char>(height));
  for(int y=0;y<height;y++){
    for(int x=0;x<width;x++){
      cin >> mp[x][y];
    }
  }



  int dirctX[4] = {0,0,1,-1};
  int dirctY[4] = {1,-1,0,0};
  int nx=0,ny=0;
  while(!que.empty()){
    P = que.front();
    que.pop();
    dx=P.first;
    dy=P.second;

    //cout << dx << "," << dy << endl;
    for(int i=0;i<4;i++){
      nx=dx;
      ny=dy;
      for(int j=0;j<K;j++){
        nx+=dirctX[i];
        ny+=dirctY[i];
        if(nx>=width || nx<0 || ny>=height || ny<0 || mp[nx][ny]=='@') break;

        if(dist[nx][ny]==-1){
          que.push(make_pair(nx,ny));
          dist[nx][ny]=dist[dx][dy]+1;
        }

        if(nx==goalX && ny==goalY){
          cout << dist[nx][ny] << endl;
          return 0;
        }
      }
    }

    /*for(int y=0;y<height;y++){
      for(int x=0;x<width;x++){
        if(mp[x][y]=='@'){
          cout << "@" << " ";
        }else if(dist[x][y]==-1){
          cout << "#" << " ";
        }else{
          cout << dist[x][y] << " ";
        }
      }
      cout << endl;
    }cout << endl;*/
  }

  cout << -1 << endl;
}
