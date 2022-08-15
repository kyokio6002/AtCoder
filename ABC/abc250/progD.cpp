#include<bits/stdc++.h>
#include <random>
using namespace std;

using ll=long long;

bool IsPrime(ll n){ 
  if(n==2)return true;
  if(n<2 || !(n%2))return false;

  double sqrtNum=sqrt(n);
  for(int i=3;i<=sqrtNum;i+=2){
    if(n%i==0){
      return false;
    }
  }
  return true;
}


int main(){

  ll n;
  cin >> n;
  if(n==1){
    cout << 0 << endl;
    return 0;
  }

  int ans=0;
  ll nmax = round(cbrt(n));
  vector<ll> primes;
  for(int i=0;i<nmax;i++){
    if(IsPrime(i))primes.push_back(i);
  }
  // for(int i=0;i<primes.size();i++){
  //   cout << primes[i] << ",";
  // }cout << endl;

  for(int pi=0;pi<primes.size()-1;pi++){
    for(int qi=pi+1;qi<primes.size();qi++){
      ll k=primes[pi]*primes[qi]*primes[qi]*primes[qi];
      // cout << "k:" << k << endl;
      // cout << "q:" << primes[qi] << endl;
      // cout << "p:" << primes[pi] << endl;
      if(k<=n)ans++;
    }
  }

  cout << ans << endl;
}
