#include<bits/stdc++.h>
using namespace std;

int main(){

  int a,b;
  cin >> a >> b;

  int ans=1;
  int lost;
  for(int y=b;y>int(pow(b,0.5));y--){
    for(int x=b-1;x>=a;x--){
      cout << gcd(x,y) << endl;
    }
  }
  cout << ans << endl;
}
