#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m,x,t,d;
  cin >> n >> m >> x >> t >> d;

  int original=t-d*x;
  if(m<=x)cout << original+d*m;
  else cout << original+d*x;
}
