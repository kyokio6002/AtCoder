#include<bits/stdc++.h>
using namespace std;

int main(){

  int h,w,r,c;
  cin >> h >> w >> r >> c;

  int ans=0;
  vector<pair<int,int>> add={{1,0},{0,1},{-1,0},{0,-1}};
  for(int i=0;i<4;i++){
    int add_x=add[i].first;
    int add_y=add[i].second;
    if(c+add_x<1 || c+add_x>w)continue;
    if(r+add_y<1 || r+add_y>h)continue;
    ans++;
  }

  cout << ans << endl;

}
