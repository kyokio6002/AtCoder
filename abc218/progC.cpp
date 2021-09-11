#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  map<int,map<int,int>> s;
  map<int,map<int,int>> t;

  char c;
  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++){
      cin >> c;
      fo
    }
  }

  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++)cin >> t[x][y];
  }

  bool flag=0;
  int count=0;
  // 90度回転
  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++){
      if(s[x][y]!=t[n-y-1][x])count++;
    }
  }
  if(count==n*n)flag=1;

  count=0;
  // 180度回転
  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++){
      if(s[x][y]!=t[y][x])count++;
    }
  }
  if(count==n*n)flag=1;

  count=0;
  // 270度回転
  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++){
      if(s[x][y]!=t[y][n-x-1])count++;
      cout << t[y][n-1-x];
    }cout << endl;
  }
  if(count==n*n)flag=1;

  if(flag)cout << "Yes" << endl;
  else cout << "No" << endl;

}
