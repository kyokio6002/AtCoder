#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  int mod=n%5;
  if(mod>=3)cout << n+(5-mod) << endl;
  else cout << n-mod << endl;
}
