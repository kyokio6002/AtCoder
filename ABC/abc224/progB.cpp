#include<bits/stdc++.h>
using namespace std;

int main(){

  int h,w;
  cin >> h >> w;

  vector<vector<int>> a(w,vector<int>(h));
  for(int y=0;y<h;y++)for(int x=0;x<w;x++)cin >> a[x][y];

  int ans=1;
  for(int i1=0;i1<h;i1++){
    for(int i2=i1+1;i2<h;i2++){
      for(int j1=0;j1<w;j1++){
        for(int j2=j1+1;j2<w;j2++){
          if(a[j1][i1]+a[j2][i2]<=a[j1][i2]+a[j2][i1])continue;
          ans=0;
        }
      }
    }
  }

  if(ans)cout << "Yes" << endl;
  else cout << "No" << endl;

}
