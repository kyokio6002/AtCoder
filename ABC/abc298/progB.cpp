#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){

  int n;
  cin >> n;

  vector<vector<int>> a(n,vector<int>(n));
  vector<vector<int>> b(n,vector<int>(n));

  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++)cin >> a[x][y];
  }
  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++)cin >> b[x][y];
  }

  bool flag=false;
  for(int i=0;i<4;i++){
    vector<vector<int>> tmp(n,vector<int>(n));
    for(int y=0;y<n;y++){
      for(int x=0;x<n;x++){
        tmp[n-1-y][x]=a[x][y];
      }
    }
    a=tmp;
    int count=0;
    for(int y=0;y<n;y++){
      for(int x=0;x<n;x++){
        if(a[x][y] && !b[x][y])count++;
      }
    }
    if(!count)flag=true;
    // for(int y=0;y<n;y++){
    //   for(int x=0;x<n;x++){
    //     cout << a[x][y] << " ";
    //   }cout << endl;
    // }cout << endl;
  }

  if(flag)cout << "Yes" << endl;
  else cout << "No" << endl;
}
