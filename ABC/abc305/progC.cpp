#include <bits/stdc++.h>
using namespace std;

int main(){

  int h,w;
  cin >> h >> w;
  vector<vector<char>> grid(w,vector<char>(h));

  int min_x=w;
  int max_x=-1;
  int min_y=h;
  int max_y=-1;
  bool x_flag=false;
  bool y_flag=false;

  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> grid[x][y];
    }
  }

  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      // xで範囲に入った時
      if(grid[x][y]=='#'){
        if(!x_flag){
          x_flag=true;
          min_x=min(min_x,x);
        }else{
          max_x=max(max_x,x);
        }

        // yで範囲に入った時
        if(!y_flag){
          y_flag=true;
          min_y=min(min_y,y);
        }else{
          max_y=max(max_y,y);
        }
      }
    }
    x_flag=false;
  }

  // cout << "min_x:" << min_x << endl;
  // cout << "max_x:" << max_x << endl;
  // cout << "min_y:" << min_y << endl;
  // cout << "max_y:" << max_y << endl;


  for(int y=min_y;y<=max_y;y++){
    for(int x=min_x;x<=max_x;x++){
      if(grid[x][y]=='.'){
        cout << y+1 << " " <<  x+1 << endl;
      }
    }
  }
}
