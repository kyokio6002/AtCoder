#include<bits/stdc++.h>
using namespace std;

int main(){

  double x,y;
  cin >> x >> y;

  double ansx=sin(atan(y/x));
  double ansy=cos(atan(y/x));
  cout << setprecision(7) << ansy << " " << ansx << endl;
  
}
