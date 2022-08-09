#include<bits/stdc++.h>
using namespace std;

int main(){

  double a,b,c,x;
  cin >> a >> b >> c >> x;

  if(x<=a)cout << 1.000000000000 << endl;
  else if(x<=b)cout << c/(b-a)<< endl;
  else cout << 0.0 << endl;
}
