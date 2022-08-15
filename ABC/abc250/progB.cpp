#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main(){

  int n,a,b;
  cin >> n >> a >> b;

  vector<vector<char>> mp(b*n,vector<char>(a*n,'.'));
  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++){
      for(int ay=0;ay<a;ay++){
        for(int bx=0;bx<b;bx++){
          if((y+x)%2)mp[x*b+bx][y*a+ay]='#';
        }
      }
    }
  }

  for(int y=0;y<a*n;y++){
    for(int x=0;x<b*n;x++){
      cout << mp[x][y];
    }
    cout << endl;
  }
}
