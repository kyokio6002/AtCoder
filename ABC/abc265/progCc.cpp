#include<bits/stdc++.h>
using namespace std;

int main(){

  int h,w;
  cin >> h >> w;
  vector<vector<char>> g(w,vector<char>(h));

  for(int y=0;y<h;y++){
    for(int x=0;x<w;x++){
      cin >> g[x][y];
    }
  }

  int x_now=0;
  int y_now=0;
  vector<vector<int>> trace(w,vector<int>(h));

  while(1){
    cout << "nowx:" << x_now << endl;
    cout << "nowy:" << y_now << endl;
    cout << g[y_now][x_now] << ":";
    trace[x_now][y_now]++;
    if(trace[x_now][y_now]>1){
      cout << -1 << endl;
      return 0;
    }
    if(g[x_now][y_now]=='U'){
      if(x_now==0){
        cout << x_now+1 << " " <<  y_now+1 << endl;
        return 0;
      }
      x_now-=1;
    }else if(g[x_now][y_now]=='D'){
      if(x_now==w-1){
        cout << x_now+1 << " " <<  y_now+1 << endl;
        return 0;
      }
      x_now+=1;
    }else if(g[x_now][y_now]=='L'){
      if(y_now==0){
        cout << x_now+1 << " " <<  y_now+1 << endl;
        return 0;
      }
      y_now-=1;
    }else if(g[x_now][y_now]=='R'){
      if(y_now==h-1){
        cout << x_now+1 << " " <<  y_now+1 << endl;
        return 0;
      }
      y_now+=1;
    }else{
      cout << x_now+1 << " " <<  y_now+1 << endl;
      return 0;
    }
    cout << x_now+1 << "," << y_now+1 << endl;
  }

  cout << x_now+1 << " " << y_now+1 << endl;

}
