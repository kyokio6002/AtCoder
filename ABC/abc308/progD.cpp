#include <iostream>
#include <vector>
using namespace std;

int h,w;
vector<vector<char>> grid;
vector<vector<bool>> dist;
vector<pair<int,int>> add{{1,0},{-1,0},{0,1},{0,-1}};
bool ans=false;
string s="snuke";

void dfs(int x,int y, int cost){
  dist[x][y]=true;
  if(x==w-1 && y==h-1){
    ans=true;
    return;
  }
  for(int i=0;i<4;i++){
    int nx=x+add[i].first;
    int ny=y+add[i].second;
    if(nx<0 || nx>=w)continue;
    if(ny<0 || ny>=h)continue;
    if(dist[nx][ny])continue;
    //cout << "nx:" << nx << endl;
    //cout << "ny:" << ny << endl;
    //cout << "ncost:" << cost+1 << endl;
    //cout << "ns:" << grid[nx][ny] << endl;
    //cout << "ns_s:" << s[(cost+1)%4] << endl;
    if(s[(cost+1)%5]!=grid[nx][ny])continue;
    //cout << "goto:" << nx << "," << ny << endl;
    //cout << endl;
    dfs(nx, ny, cost+1);
  }
}

int main(){

  cin >> h >> w;

  grid=vector<vector<char>>(w,vector<char>(h));
  dist=vector<vector<bool>>(w,vector<bool>(h));
  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> grid[x][y];
    }
  }

  dfs(0, 0, 0);
  if(ans)cout << "Yes" << endl;
  else cout << "No" << endl;
}
