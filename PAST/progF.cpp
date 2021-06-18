#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  char c[n][n];
  vector<char> out(n,'#');
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> c[i][j];
    }
  }

  //偶数の場合
  if(n%2==0){
    for(int i=0;i<n/2;i++){
      map<char,bool> mp;
      for(int j=0;j<n;j++){
        mp[c[i][j]]=1;
      }
      for(int j=0;j<n;j++){
        if(mp[c[n-1-i][j]]==1){
          out[i]=out[n-1-i]=c[n-1-i][j];
          break;
        }
        if(j==n-1){
          cout << -1 << endl;
          return 0;
        }
      }
    }
  }
  //奇数の場合
  else{
    for(int i=0;i<(n-1)/2;i++){
      map<char,int> mp;
      for(int j=0;j<n;j++){
        mp[c[i][j]]=1;
      }
      for(int j=0;j<n;j++){
        if(mp[c[n-1-i][j]]==1){
          out[i]=out[n-1-i]=c[n-1-i][j];
          break;
        }
        if(j==n-1){
          cout << -1 << endl;
          return 0;
        }
      }
    }
    out[(n-1)/2]=c[(n-1)/2][0];
  }

  for(int i=0;i<n;i++){
    cout << out[i];
  }cout << endl;

}
