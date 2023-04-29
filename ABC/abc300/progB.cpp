#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){

  int h,w;
  cin >> h >> w;

  vector<vector<char>> grid1(w,vector<char>(h));
  vector<vector<char>> grid2(w,vector<char>(h));
  vector<int> grid1_tate(w);
  vector<int> grid1_yoko(h);
  vector<int> grid2_tate(w);
  vector<int> grid2_yoko(h);

  int count1=0;
  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> grid1[x][y];
      if(grid1[x][y]=='#')count1++;
    }
  }
  int count2=0;
  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> grid2[x][y];
      if(grid2[x][y]=='#')count2++;
    }
  }

  if(count1!=count2){
    cout << "No" << endl;
    return 0;
  }

  for(int y=0;y<h;y++){
    int yoko_sum1=0;
    int yoko_sum2=0;
    for(int x=0;x<w;x++){
      if(grid1[x][y]=='#')yoko_sum1++;
      if(grid2[x][y]=='#')yoko_sum2++;
    }
    grid1_yoko[y]=yoko_sum1;
    grid2_yoko[y]=yoko_sum2;
  }
  for(int x=0;x<w;x++){
    int tate_sum1=0;
    int tate_sum2=0;
    for(int y=0;y<h;y++){
      if(grid1[x][y]=='#')tate_sum1++;
      if(grid2[x][y]=='#')tate_sum2++;
    }
    grid1_tate[x]=tate_sum1;
    grid2_tate[x]=tate_sum2;
  }

  // for(int y=0;y<h;y++)cout << grid1_yoko[y] << ",\n"[y==h-1];
  // for(int y=0;y<h;y++)cout << grid2_yoko[y] << ",\n"[y==h-1];
  // for(int x=0;x<w;x++)cout << grid1_tate[x] << ",\n"[x==w-1];
  // for(int x=0;x<w;x++)cout << grid2_tate[x] << ",\n"[x==w-1];

  sort(grid1_tate.begin(), grid1_tate.end());
  sort(grid2_tate.begin(), grid2_tate.end());
  sort(grid1_yoko.begin(), grid1_yoko.end());
  sort(grid2_yoko.begin(), grid2_yoko.end());


  for(int y=0;y<h;y++){
    if(grid1_yoko[y]!=grid2_yoko[y]){
      cout << "No" << endl;
      return 0;
    }
  }
  for(int x=0;x<w;x++){
    if(grid1_tate[x]!=grid2_tate[x]){
      cout << "No" << endl;
      return 0;
    }
  }
  for(int y=0;y<h;y++){
    int yoko_sum1=0;
    int yoko_sum2=0;
    for(int x=0;x<w;x++){
      if(grid1[x][y]=='#')yoko_sum1++;
      if(grid2[x][y]=='#')yoko_sum2++;
    }
    grid1_yoko[y]=yoko_sum1;
    grid2_yoko[y]=yoko_sum2;
  }

  
  cout << "Yes" << endl;

}
