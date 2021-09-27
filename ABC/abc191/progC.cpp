#include<bits/stdc++.h>
using namespace std;

int main(){

  int h,w;
  cin >> h >> w;

  vector<vector<char>> s(w,vector<char>(h));
  int ans=0;

  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> s[x][y];
    }
  }

  int sum;
  for(int y=0;y<h-1;y++){
    for(int x=0;x<w-1;x++){
      sum=0;
      if(s[x][y]=='#')sum++;
      if(s[x+1][y]=='#')sum++;
      if(s[x][y+1]=='#')sum++;
      if(s[x+1][y+1]=='#')sum++;
      if(sum%2==1)ans++;
    }
  }
  cout << ans << endl;
}
