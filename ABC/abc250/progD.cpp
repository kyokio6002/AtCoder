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

  ll ans=0;
  ll nmax = 1;
  while(nmax*nmax*nmax*2<=n)nmax++;
  vector<ll> primes;
  for(int i=0;i<nmax;i++)if(IsPrime(i))primes.push_back(i);
  vector<ll> sum_primes(nmax+1);
  ll prime_count=primes.size();

  for(int i=0;i<prime_count;i++)sum_primes[primes[i]]++;

  ll sum=0;
  for(int i=0;i<=nmax;i++){
    sum+=sum_primes[i];
    sum_primes[i]=sum;
  }

  // cout << endl << "nmax:" << nmax << endl;
  // // ---- print primes ----
  // cout << endl << "primes" << endl;
  // for(int i=0;i<prime_count;i++)cout << primes[i] << ",";cout << endl;
  // // ---- print sum primes ----
  // cout << endl << "sum primes" << endl;
  // for(int i=1;i<nmax+1;i++)cout << i << ",";cout << endl;
  // for(int i=1;i<nmax+1;i++)cout << "--";cout << endl;
  // for(int i=1;i<nmax+1;i++)cout << sum_primes[i] << ",";cout << endl;

  for(int qi=1;qi<prime_count;qi++){
    ll q=primes[qi];
    ll p=min(q,n/(q*q*q));
    if(p==q)p=primes[qi-1];

    ll add=sum_primes[p];
    ans+=add;

    // cout << "n/(q*q*q):" << n/(q*q*q) <<  endl;
    // cout << "q:" << q << endl;
    // cout << "p:" << p << endl;
    // cout << "add:" << add << endl;
    // cout << "ans:" << ans << endl;
    // cout << endl;
  }


  cout << ans << endl;
}
