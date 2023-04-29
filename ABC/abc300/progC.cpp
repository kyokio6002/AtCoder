#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool check(vector<vector<char>> &mp, int x, int y, int h, int w){

  if(x+1>=w || x-1<0)return false;
  if(y+1>=h || y-1<0)return false;


  if(mp[x-1][y-1]!='#')return false;
  if(mp[x][y-1]!='.')return false;
  if(mp[x+1][y-1]!='#')return false;

  if(mp[x-1][y]!='.')return false;
  if(mp[x][y]!='#')return false;
  if(mp[x+1][y]!='.')return false;

  if(mp[x-1][y+1]!='#')return false;
  if(mp[x][y+1]!='.')return false;
  if(mp[x+1][y+1]!='#')return false;

  return true;
}


int cucl(vector<vector<char>> mp, int x, int y, int h, int w){

  int ans=0;
  while(true){
    x++,y++;
    if(x>=w || x<0)return ans;
    if(y>=h || y<0)return ans;
    if(mp[x][y]!='#')return ans;
    ans++;
  }
}

int main(){

  int h,w;
  cin >> h >> w;
  vector<vector<char>> mp(w,vector<char>(h));

  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> mp[x][y];
    }
  }

  vector<int> ans(100);
  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      if(check(mp,x,y,h,w)){
        ans[cucl(mp,x,y,h,w)-1]++;
      }
    }
  }

  for(int i=0;i<min(h,w);i++){
    cout << ans[i] << " \n"[i==(min(h,w)-1)];
  }
}
