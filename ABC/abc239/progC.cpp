#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){

  ll x1,y1;
  ll x2,y2;
  cin >> x1 >> y1 >> x2 >> y2;

  vector<pair<ll,ll>> pos={{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}};

  for(auto p1:pos){
    ll xx1,yy1;
    ll xx2,yy2;
    xx1=x1+p1.first;
    yy1=y1+p1.second;
    for(auto p2:pos){
      xx2=x2+p2.first;
      yy2=y2+p2.second;
      if(xx1==xx2 && yy1==yy2){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  
  cout << "No" << endl;
}
