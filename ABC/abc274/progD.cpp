#include <bits/stdc++.h>
#include <cmath>
#include <complex>
#include <vector>
using namespace std;

int main(){

  int n,X,Y;
  cin >> n >> X >> Y;

  vector<int> a(n);  // i to i+1
  for(int i=0;i<n;i++)cin >> a[i];

  vector<vector<pair<int,int>>> p(n+1);
  p[0].emplace_back(0,0);
  p[1].emplace_back(a[0],0);

  for(int i=0;i<n-1;i++){
    for(auto pi:p[i]){
      for(auto pi_1:p[i+1]){

        // cout << "pi:" << pi.first << "," << pi.second << endl;
        // cout << "pi_1:" << pi_1.first << "," << pi_1.second << endl;

        if(pi.second==pi_1.second){
          // cout << "上下" << endl;
          int x=pi_1.first;

          int y1=pi_1.second+a[i+1];
          int y2=pi_1.second-a[i+1];

          p[i+2].emplace_back(x,y1);
          p[i+2].emplace_back(x,y2);
        }

        if(pi.first==pi_1.first){
          // cout << "左右" << endl;
          int y=pi_1.second;

          int x1=pi_1.first+a[i+1];
          int x2=pi_1.first-a[i+1];

          p[i+2].emplace_back(x1,y);
          p[i+2].emplace_back(x2,y);
        }
      }
      // for(auto pi_2:p[i+2])cout << pi_2.first << "," << pi_2.second << endl;
    }
  }

  for(pair<int,int> pp:p[n]){
    if(pp.first==X && pp.second==Y){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
