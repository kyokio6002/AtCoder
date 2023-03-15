#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;

// p,qの最大値は10^6

vector<bool> eratosthenes(long long max_n){

  vector<bool> is_primes(max_n+1, true);
  
  is_primes[0]=false;
  is_primes[1]=false;

  for(long long p=2;p<=max_n;p++){
    if(!is_primes[p])continue;
    for(long long np=p*2;np<=max_n;np+=p){
      is_primes[np]=false;
    }
  }

  return is_primes;
}

int main(){

  long long max_n=2080084;
  vector<bool> is_primes=eratosthenes(max_n);
  set<long long> primes;
  for(long long i=0;i<=max_n;i++){
    if(!is_primes[i])continue;
    primes.insert(i);
  }

  int t;
  cin >> t;
  while(t--){
    long long n;
    cin >> n;
    for(long long p:primes){
      if(n%(p*p)==0){
        cout << p << " " << n/p/p << endl;
      }else if(n%p==0){
        cout << (long long)(sqrt(n/p)) << " " << p << endl;
      }else{
        continue;
      }
      break;
    }
  }
}
