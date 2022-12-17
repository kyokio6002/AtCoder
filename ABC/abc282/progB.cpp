#include <bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;
  vector<vector<char>> s(n,vector<char>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> s[i][j];
    }
  }

  int ans=0;

  for(int p1=0;p1<n-1;p1++){
    for(int p2=p1+1;p2<n;p2++){
      int count=0;
      for(int j=0;j<m;j++){
        if(s[p1][j]=='o' || s[p2][j]=='o')count++;
      }
      if(count==m)ans++;
    }
  }

  cout << ans << endl;
}
