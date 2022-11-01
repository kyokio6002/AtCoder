#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

#define max_len 9
vector<vector<char>> mp(max_len,vector<char>(max_len));

bool CheckSquare1(int x,int y, int len){
  if(x+len>=max_len || y+len>=max_len)return false;
  
  if(mp[x][y]!='#')return false;
  if(mp[x+len][y]!='#')return false;
  if(mp[x][y+len]!='#')return false;
  if(mp[x+len][y+len]!='#')return false;

  // cout << "水平正方形" << endl;
  // cout << "x:" << x << endl;
  // cout << "y:" << y << endl;
  // cout << "len:" << len << endl;
  return true;
}

bool CheckSquare2(int x, int y, int len_1, int len_2){
  if(x-len_1<0 || y+len_2>=max_len)return false;
  if(x+len_2>=max_len || y+len_1>=max_len)return false;
  if(x-(len_1-len_2)<0 || y+(len_1+len_2)>=max_len)return false;
  
  if(mp[x][y]!='#')return false;
  if(mp[x-len_1][y+len_2]!='#')return false;
  if(mp[x+len_2][y+len_1]!='#')return false;
  if(mp[x-(len_1-len_2)][y+(len_1+len_2)]!='#')return false;

  // cout << "斜め正方形" << endl;
  // cout << "x:" << x << endl;
  // cout << "y:" << y << endl;
  // cout << "len_1:" << len_1 << endl;
  // cout << "len_2:" << len_2 << endl;
  return true;
}


int main(){

  for(int y=0;y<max_len;y++){
    for(int x=0;x<max_len;x++)cin >> mp[x][y];
  }

  int ans=0;
  for(int y=0;y<max_len;y++){
    for(int x=0;x<max_len;x++){
      // 水平正方形
      for(int len=1;len<max_len;len++)ans+=CheckSquare1(x, y, len);

      // 斜め正方形
      for(int yy=y+1;yy<max_len;yy++){
        for(int xx=x-1;xx>=0;xx--){
          int len_x=x-xx;
          int len_y=yy-y;
          ans+=CheckSquare2(x, y, len_x, len_y);
        }
      }
    }
  }

  cout << ans << endl;

}
