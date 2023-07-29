#include <iostream>
#include <vector>
using namespace std;

int h,w;
vector<vector<char>> grid;

bool is_code(int x,int y){
  bool ans=true;
  // 左上が黒
  for(int yy=y;yy<y+3;yy++){
    for(int xx=x;xx<x+3;xx++){
      if(grid[xx][yy]!='#')ans=false;
    }
  }
  // cout << " 01:" << ans << endl;
  // 右下が黒
  for(int yy=y+6;yy<y+9;yy++){
    for(int xx=x+6;xx<x+9;xx++){
      if(grid[xx][yy]!='#')ans=false;
    }
  }
  // cout << " 02:" << ans << endl;
  // 左上の隣接する場所が白
  if(grid[x+3][y]!='.')ans=false;
  if(grid[x+3][y+1]!='.')ans=false;
  if(grid[x+3][y+2]!='.')ans=false;
  if(grid[x+3][y+3]!='.')ans=false;
  if(grid[x+2][y+3]!='.')ans=false;
  if(grid[x+1][y+3]!='.')ans=false;
  if(grid[x][y+3]!='.')ans=false;
  // cout << " 03:" << ans << endl;
  // 右下の隣接する場所が白
  if(grid[x+5][y+5]!='.')ans=false;
  if(grid[x+6][y+5]!='.')ans=false;
  if(grid[x+7][y+5]!='.')ans=false;
  if(grid[x+8][y+5]!='.')ans=false;
  if(grid[x+5][y+6]!='.')ans=false;
  if(grid[x+5][y+7]!='.')ans=false;
  if(grid[x+5][y+8]!='.')ans=false;
  // cout << " 04:" << ans << endl;

  return ans;
}

int main(){

  cin >> h >> w;
  grid=vector<vector<char>>(w, vector<char>(h));
  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> grid[x][y];
    }
  }

  for(int y=0;y<=h-9;y++){
    for(int x=0;x<=w-9;x++){
      // cout << x << "," << y << endl;
      if(is_code(x,y)){
        cout << y+1 << " " << x+1 << endl;
      }
    }
  }
}
