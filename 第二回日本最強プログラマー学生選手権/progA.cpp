#include<bits/stdc++.h>
using namespace std;

int main(){

  int x,y,z;
  cin >> x >> y >> z;
  int ans=1000000;
  while(1){
    if(y*z>x*ans){
      cout << ans << endl;
      return 0;
    }
    ans--;
  }

}
