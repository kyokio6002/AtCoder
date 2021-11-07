#include<bits/stdc++.h>
using namespace std;

int main(){
  double x;
  cin >> x;

  int ans = int(x*10);
  if(ans%10>=5)ans+=10;
  cout << ans/10 << endl;
}
