#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int h,w;

void tate_shift(vector<vector<char>> &grid){
  vector<char> tmp(w);

  for(int y=0;y<h-1;y++){
    // tmp<-y
    // y<-y+1
    // y+1<-tmp
    for(int x=0;x<w;x++)tmp[x]=grid[x][y];
    for(int x=0;x<w;x++)grid[x][y]=grid[x][(y+1)%h];
    for(int x=0;x<w;x++)grid[x][(y+1)%h]=tmp[x];
  }
}

void yoko_shift(vector<vector<char>> &grid){
  vector<char> tmp(h);
  for(int x=0;x<w-1;x++){
    // tmp<-x
    // x<-x+1
    // x+1<-tmp
    for(int y=0;y<h;y++)tmp[y]=grid[x][y];
    for(int y=0;y<h;y++)grid[x][y]=grid[(x+1)%w][y];
    for(int y=0;y<h;y++)grid[(x+1)%w][y]=tmp[y];
  }
}

bool is_sama(vector<vector<char>> &gridA, vector<vector<char>> &gridB){
  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      if(gridA[x][y]!=gridB[x][y])return false;
    }
  }
  return true;
}

int main(){

  cin >> h >> w;

  vector<vector<char>> gridA(w,vector<char>(h));
  vector<vector<char>> gridB(w,vector<char>(h));

  int count1=0;
  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> gridA[x][y];
    }
  }
  int count2=0;
  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> gridB[x][y];
    }
  }

  for(int shift_y=0;shift_y<=h;shift_y++){
    tate_shift(gridA);
    for(int shift_x=0;shift_x<=w;shift_x++){
      yoko_shift(gridA);

      // cout << "shift_y:" << shift_y << endl;
      // cout << "shift_x:" << shift_x << endl;
      // for(int y=0;y<h;y++){
      //   for(int x=0;x<w;x++){
      //     cout << gridA[x][y];
      //   }cout << endl;
      // }cout << endl << endl;

      if(is_sama(gridA, gridB)){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
}
