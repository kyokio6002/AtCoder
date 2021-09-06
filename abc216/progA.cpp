#include<bits/stdc++.h>
using namespace std;

int main(){

  double n;
  cin >> n;

  int ans=int(n*10);

  if(ans%10>=0 && ans%10<=2)cout << ans/10 << '-' << endl;
  else if(ans%10>=3 && ans%10<=6)cout << ans/10 << endl;
  else cout << ans/10 << '+' << endl;

}
