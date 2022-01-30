#include<bits/stdc++.h>
using namespace std;

using ll=long long;
int main(){

  int h,w;
  cin >> h >> w;
  vector<vector<int>> m(w,vector<int>(h));

  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> m[x][y];
    }
  }

  for(int x=0;x<w;x++){
    for(int y=0;y<h;y++){
      cout << m[x][y] << ' ';
    }
    cout << endl;
  }
}

