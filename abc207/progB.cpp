#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  int a,b,c,d;
  cin >> a >> b >> c >> d;

  if(c*d>b){
    int ans=0;
    ll red=0;
    ll blue=a;
    while(1){
      ans++;
      red+=c;
      blue+=b;
      if(red*d<blue)continue;
      cout << ans << endl;
      break;
    }
  }else cout << -1 << endl;
}
