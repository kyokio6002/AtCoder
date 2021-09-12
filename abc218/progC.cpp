#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<vector<char>> s(n,vector<char>(n));
  vector<vector<char>> t(n,vector<char>(n));

  // s
  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++)cin >> s[x][y];
  }

  // t
  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++)cin >> t[x][y];
  }

  int sx_min=1001001001,sx_max=0;
  int sy_min=1001001001,sy_max=0;
  int tx_min=1001001001,tx_max=0;
  int ty_min=1001001001,ty_max=0;

  // sの切り取り
  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++){
      if(s[x][y]=='#'){
        sx_min=min(sx_min,x);
        sx_max=max(sx_max,x);
        sy_min=min(sy_min,y);
        sy_max=max(sy_max,y);
      }
    }
  }
  // tの切り取り
  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++){
      if(t[x][y]=='#'){
        tx_min=min(tx_min,x);
        tx_max=max(tx_max,x);
        ty_min=min(ty_min,y);
        ty_max=max(ty_max,y);
      }
    }
  }

  int sw=sx_max-sx_min+1;
  int sh=sy_max-sy_min+1;
  int tw=tx_max-tx_min+1;
  int th=ty_max-ty_min+1;

  // リサイズ後の図形
  vector<vector<char>> ss(sw,vector<char>(sh,'.'));
  vector<vector<char>> tt(tw,vector<char>(th,'.'));

  // cout << "sw:" << sw << endl;
  // cout << "sh:" << sh << endl;
  // cout << "tw:" << tw << endl;
  // cout << "th:" << th << endl;

  bool square=0;
  // 図形の範囲が一致するかどうか
  if(sw==tw && sh==th && sw==sh)square=1; // 正方形の場合
  if(sw==tw && sh==th){
    for(int y=0;y<sh;y++){
      for(int x=0;x<sw;x++){
        ss[x][y]=s[sx_min+x][sy_min+y];
      }
    }
    for(int y=0;y<th;y++){
      for(int x=0;x<tw;x++){
        tt[x][y]=t[tx_min+x][ty_min+y];
      }
    }
  }else if(sw==th && sh==tw){
    for(int y=0;y<sh;y++){
      for(int x=0;x<sw;x++){
        ss[x][y]=s[sx_min+x][sy_min+y];
      }
    }
    tt.resize(th,vector<char>(tw));
    for(int y=0;y<th;y++){
      for(int x=0;x<tw;x++){
        tt[y][x]=t[tx_min+x][ty_max-y];
      }
    }
    swap(tw,th);
  }else{
    cout << "No" << endl;
    return 0;
  }

  // cout << "リサイズ後" << endl;
  // for(int y=0;y<sh;y++){
  //   for(int x=0;x<sw;x++){
  //     cout << ss[x][y];
  //   }cout << endl;
  // }
  // cout << endl;
  // for(int y=0;y<th;y++){
  //   for(int x=0;x<tw;x++){
  //     cout << tt[x][y];
  //   }cout << endl;
  // }


  bool flag=0;
  int count=0;
  // 0度回転
  for(int y=0;y<sh;y++){
    for(int x=0;x<sw;x++){
      if(ss[x][y]==tt[x][y])count++;
    }
  }
  // cout << "count:" << count << endl;
  if(count==sh*sw)flag=1;

  count=0;
  // 180度回転
  for(int y=0;y<sh;y++){
    for(int x=0;x<sw;x++){
      if(ss[x][y]==tt[tw-x-1][th-y-1])count++;
    }
  }
  // cout << "count:" << count << endl;
  if(count==sh*sw)flag=1;

  if(square){
    // 90度回転
    for(int y=0;y<sh;y++){
      for(int x=0;x<sw;x++){
        if(ss[x][y]==tt[sh-y-1][x])count++;
      }
    }
    // cout << "count:" << count << endl;
    if(count==n*n)flag=1;

    count=0;
    // 270度回転
    for(int y=0;y<sh;y++){
      for(int x=0;x<sw;x++){
        if(ss[x][y]==tt[y][sw-x-1])count++;
      }
    }
    // cout << "count:" << count << endl;
    if(count==n*n)flag=1;
  }

  if(flag)cout << "Yes" << endl;
  else cout << "No" << endl;

}
