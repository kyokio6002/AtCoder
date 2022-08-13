#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
using namespace std;


int main(){

  int h1,w1;
  cin >> h1 >> w1;
  vector<vector<int>> a(w1,vector<int>(h1));
  for(int y=0;y<h1;y++)for(int x=0;x<w1;x++)cin >> a[x][y];
  int h2,w2;
  cin >> h2 >> w2;
  vector<vector<int>> b(w2,vector<int>(h2));
  for(int y=0;y<h2;y++)for(int x=0;x<w2;x++)cin >> b[x][y];

  // y->x
  int pat=0;
  int maxp=1;
  for(int i=0;i<h1+w1;i++)maxp*=2;
  vector<vector<int>> na(w1,vector<int>(h1));
  int iy=0;
  int ix=0;
  while(maxp>pat){
    // cout << "pat:" << pat << endl;
    ix=0;
    iy=0;
    for(int y=0;y<h1;y++){
      if(pat&(1<<(y+w1)))continue;
      ix=0;
      for(int x=0;x<w1;x++){
        if(pat&(1<<x))continue;
        na[ix][iy]=a[x][y];
        ix++;
      }
      iy++;
    }
    // cout << "ix:" << ix << endl;
    // cout << "iy:" << iy << endl;
    // for(int y=0;y<iy;y++){
    //   for(int x=0;x<ix;ix++){
    //     cout << na[ix][iy];
    //   }cout << endl;
    // }
    // cout << "01:" << pat << endl;

    int ans=0;
    if(ix==0 || iy==0){
      pat++;
      continue;
    }else if(ix>w2 || iy>h2){
      pat++;
      continue;
    }
    // cout << "ix:" << ix << endl;
    // cout << "iy:" << iy << endl;
    for(int addx=0;addx<=w2-ix;addx++){
      for(int addy=0;addy<=h2-iy;addy++){
        for(int y=0;y<iy;y++){
          for(int x=0;x<ix;x++){
            if(b[x+addx][y+addy]!=na[x][y])ans++;
            // cout << pat << endl;
          }
        }
      }
    }

    // cout << "02:" << pat << endl;

    if(ans==0 && ix!=0 && iy!=0){
      // cout << ix*iy << endl;
      cout << "Yes" << endl;
      return 0;
    }

    // cout << "03:" << pat << endl;
    pat++;
  }

  cout << "No" << endl;
  
}
