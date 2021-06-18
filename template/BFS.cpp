#include<bits/stdc++.h>
using namespace std;

void SolveMap(){
  int width,height;
  cin >> width >> height;
  vector<vector<char>> map(height+2,vector<char>(width+2));

  for(int y=0;y<height+2;y++){
    for(int x=0;x<width+2;x++){
      if(y==0||y==height+1) map[y][x] = '1';
      else if(x==0||x==width+1) map[y][x] = '1';
      else cin >> map[y][x];
    }
  }

  for(int y=0;y<height+2;y++){
    for(int x=0;x<width+2;x++){
      cout << map[y][x] << " ";
    }
    cout << endl;
  }

  //行った場所を記録する配列(行ってないところは-1)
  vector<vector<int>> dist(height+2,vector<int>(width+2,-1));
  //queue(処理まちの箱)
  queue<pair<int,int>> que;

  //startを探す
  int startX = -1,startY = -1;
  int goalX = -1,goalY = -1;
  for(int y=0;y<height+2;y++){
    for(int x=0;x<width+2;x++){
      if(map[y][x] == 's'){
        startX = x;
        startY = y;
        cout << "startX:" << startX << "," << "startY:" << startY << endl;
      }
      else if(map[y][x] == 'g'){
        goalX = x;
        goalY = y;
        cout << "goalX:" << goalX << "," << "goalY:" << goalY << endl;
      }
    }
  }

  //原点を設定
  dist[startY][startX] = 0;
  que.push(pair<int, int>(startY, startX));

  //BFS開始
  while(!que.empty()){
    int dy = que.front().first;
    int dx = que.front().second;
    //queの先頭を消去
    que.pop();

    //cout << "y,x;" << dy << "," << dx << endl;
    //cout << "右;左;上;下" << map[dy][dx+1] << map[dy][dx-1] << map[dy-1][dx] << map[dy+1][dx] << endl;;

    //右検索(未探索かつ壁でない場合)
    if((dist[dy][dx+1] == -1) && (map[dy][dx+1] != '1')){
      //cout << "右探索します" << endl;
      dist[dy][dx+1] = dist[dy][dx] + 1;
      que.push(pair<int,int>(dy,dx+1));
      //cout << "dist[dy][dx+1]:" << dist[dy][dx+1] << endl;
    }

    //左探索(未探索かつ壁ではない場合)
    if((dist[dy][dx-1] == -1) && (map[dy][dx-1] != '1')){
      //cout << "左探索します" << endl;
      dist[dy][dx-1] = dist[dy][dx] + 1;
      que.push(pair<int,int>(dy,dx-1));
      //cout << "dist[dy][dx-1]:" << dist[dy][dx-1] << endl;
    }

    //上探索(未探索かつ壁でない場合)
    if((dist[dy-1][dx] == -1) && (map[dy-1][dx] != '1')){
      //cout << "上探索します" << endl;
      dist[dy-1][dx] = dist[dy][dx] + 1;
      que.push(pair<int,int>(dy-1,dx));
      //cout << "dist[dy-1][dx]:" << dist[dy-1][dx] << endl;
    }

    //下探索(未探索かつ壁でない場合)
    if((dist[dy+1][dx] == -1) && (map[dy+1][dx] != '1')){
      //cout << "下探索します" << endl;
      dist[dy+1][dx] = dist[dy][dx] + 1;
      que.push(pair<int,int>(dy+1,dx));
      //cout << "dist[dy+1][dx]:" << dist[dy+1][dx] << endl;
    }
  }

  for(int y=0;y<height+2;y++){
    for(int x=0;x<width+2;x++){
      if(dist[y][x] == -1) cout << "壁 ";
      else if(dist[y][x]<10) cout << "0" << dist[y][x] << " ";
      else cout << dist[y][x] << " ";
    }
    cout << endl;
  }

  cout << "最短経路:" << dist[goalY][goalX] << endl;;
}

int main(){

  SolveMap();
}
