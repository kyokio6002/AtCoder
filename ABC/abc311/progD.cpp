#include <iostream>
#include <map>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

struct point{
  int x;
  int y;
};

struct npoint{
  int x;
  int y;
  int from_dire;
};

int w,h;
vector<vector<int>> dist;
vector<vector<char>> grid;
vector<point> dire={{1,0},{-1,0},{0,1},{0,-1}};
map<pair<int,int>,int> stopped;

int main(){

  cin >> w >> h;
  grid=vector<vector<char>>(w,vector<char>(h));
  dist=vector<vector<int>>(w, vector<int>(h));

  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> grid[x][y];
    }
  }

  // 0:左, 1:右, 2:下, 3:上, 4:原点
  queue<npoint> que;
  npoint tp;
  tp.x=1;
  tp.y=1;
  tp.from_dire=4;
  que.push(tp);
  stopped[{1,1}]++;
  dist[1][1]++;
  while(!que.empty()){
    point p;
    p.x=que.front().x;
    p.y=que.front().y;
    int from_dire=que.front().from_dire;
    que.pop();
    cout << "start:" << p.x+1 << "," << p.y+1 << endl;
    for(int i=0;i<4;i++){
      cout << "i=" << i << endl;
      int nx=p.x;
      int ny=p.y;
      if(from_dire==i){
        cout << "from_dire:" << from_dire << endl;
        cout << "i:" << i << endl;
        continue;
      }

      // ぶつかるまで進む
      bool flag=true;
      while(flag){
        nx=nx+dire[i].x;
        ny=ny+dire[i].y;
        if(grid[nx][ny]=='#'){
          int prio_x=nx-dire[i].x;
          int prio_y=ny-dire[i].y;
          if(!stopped.count({prio_x, prio_y})){
            npoint np;
            np.x=prio_x;
            np.y=prio_y;
            np.from_dire=i;
            que.push(np);
            stopped[{prio_x,prio_y}]++;
            cout << "入れた" << endl;
          }else{
            cout << "入れない" << endl;
          }
          dist[nx][ny]++;
          flag=false;
          continue;
        }
        if(nx<=0 || nx>=w-1){
          cout << "01break" << endl;
          flag=false;
          continue;
        }
        if(ny<=0 || ny>=h-1){
          cout << "02break" << endl;
          flag=false;
          continue;
        }
        cout << " " <<  nx+1 << "," << ny+1 << endl;
        dist[nx][ny]++;
      }
    }
  }

  int ans=0;
  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      if(dist[x][y]>0)ans++;
    }
  }

  cout << ans << endl;

}
