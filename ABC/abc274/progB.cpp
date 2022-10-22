#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){

  int h,w;
  cin >> h >> w;
  vector<vector<char>> mp(w,vector<char>(h));

  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> mp[x][y];
    }
  }

  for(int x=0;x<w;x++){
    int ans=0;
    for(int y=0;y<h;y++){
      if(mp[x][y]=='#')ans++;
    }
    cout << ans << " ";
  }cout << endl;
}
