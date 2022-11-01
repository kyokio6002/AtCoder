#include <bits/stdc++.h>
using namespace std;

#define mod 998244353

int main(){

  long long a,b,c,d,e,f;
  cin >> a >> b >> c >> d >> e >> f;
  a%=mod;
  b%=mod;
  c%=mod;
  d%=mod;
  e%=mod;
  f%=mod;
  long long ans1=1;
  ans1=ans1*a%mod;
  ans1=ans1*b%mod;
  ans1=ans1*c%mod;
  long long ans2=1;
  ans2=ans2*d%mod;
  ans2=ans2*e%mod;
  ans2=ans2*f%mod;
  long long ans=ans1-ans2;

  cout << (ans+mod)%mod << endl;
}
