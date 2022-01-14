#include<bits/stdc++.h>
using namespace std;

int f(int t){
  return t*t+2*t+3;
}

int main(){

  int t;
  cin >> t;
  int ans=f(f(f(t)+t)+f(f(t)));

  cout << ans << endl;
}

