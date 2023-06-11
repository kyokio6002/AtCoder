#include <bits/stdc++.h>
using namespace std;

int main(){

  int a,b;
  cin >> a >> b;
  int ans=1;
  while(b--){
    ans*=a;
  }
  cout << ans << endl;
}
