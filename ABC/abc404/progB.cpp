#include <algorithm>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<vector<char>> s(n, vector<char>(n));
  vector<vector<char>> t(n, vector<char>(n));
  for(int y=0;y<n;y++)for(int x=0;x<n;x++)cin >> s[x][y];
  for(int y=0;y<n;y++)for(int x=0;x<n;x++)cin >> t[x][y];

  int ans=0;
  for(int y=0;y<n;y++)for(int x=0;x<n;x++)if(s[x][y]!=t[x][y])ans++;

  for(int i=0;i<4;i++){
    vector<vector<char>> tmp(n, vector<char>(n));
    for(int y=0;y<n;y++)for(int x=0;x<n;x++)tmp[x][y]=s[x][y];

    for(int y=0;y<n;y++)for(int x=0;x<n;x++)s[x][y]=tmp[y][n-x-1];

    int count=i+1;
    for(int y=0;y<n;y++)for(int x=0;x<n;x++)if(s[x][y]!=t[x][y])count++;
    ans = min(ans, count);
  }
  cout << ans << endl;
}
