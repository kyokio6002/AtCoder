#include<bits/stdc++.h>
#include <string>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<vector<long long>> a(n,vector<long long>(n));
  for(int i=0;i<n;i++)for(int j=0;j<n;j++){
    char c;
    cin >> c;
    a[i][j]=c-'0';
  }

  vector<pair<int,int>> add={{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}};
  long long ans=0;
  for(int y=0;y<n;y++){
    for(int x=0;x<n;x++){
      for(int i=0;i<8;i++){
        int nx=x;
        int ny=y;
        string now=to_string(a[x][y]);
        for(int j=0;j<n-1;j++){
          nx=(nx+add[i].first+n)%n;
          ny=(ny+add[i].second+n)%n;
          now+=to_string(a[nx][ny]);
        }
        ans=max(ans,stoll(now));
      }
    }
  }

  cout << ans << endl;
}
