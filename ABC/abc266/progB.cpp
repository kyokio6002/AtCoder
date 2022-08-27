#include<bits/stdc++.h>
using namespace std;

int main(){

  long long n;
  cin >> n;

  long long add=n%998244353;

  cout << (add+998244353)%998244353 << endl;

}
