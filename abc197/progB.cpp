#include<bits/stdc++.h>
using namespace std;

int main(){

  int h,w,x,y;
  cin >> h >> w >> y >> x;
  x--,y--;

  vector<vector<char>> s(w,vector<char>(h));
  vector<vector<int>> dist(w,vector<int>(h));

  for(int i=0;i<h;i++)for(int j=0;j<w;j++)cin >> s[j][i];
  int ans=0;

  // up
  for(int i=y;i>=0;i--){
    if(s[x][i]=='#')break;
    dist[x][i]++;
    ans++;
  }

  // down
  for(int i=y;i<h;i++){
    if(s[x][i]=='#')break;
    dist[x][i]++;
    ans++;
  }

  // right
  for(int i=x;i<w;i++){
    if(s[i][y]=='#')break;
    dist[i][y]++;
    ans++;
  }

  // left
  for(int i=x;i>=0;i--){
    if(s[i][y]=='#')break;
    dist[i][y]++;
    ans++;
  }
  // for(int i=0;i<h;i++){
  //   for(int j=0;j<w;j++){
  //     cout << dist[j][i];
  //   }cout << endl;
  // }

  cout << ans-3 << endl;
}
