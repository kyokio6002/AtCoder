#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<vector<int>> a(n,vector<int>(n));
  
  char c;
  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++){
      cin >> c;
      if(c=='W')a[x][y]=1;
      else if(c=='L')a[x][y]=-1;
      else if(c=='D')a[x][y]=0;
      else a[x][y]=0;
    }
  }

  for(int y=0;y<n;y++){
    for(int x=0;x<y;x++){
      if(a[x][y]+a[y][x]){
        cout << "incorrect" << endl;
        return 0;
      }
    }
  }

  cout << "correct" << endl;
}
