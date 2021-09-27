#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
#define max_index 10000000

ll modpow(ll n,ll m=mod-2){
  ll r=1;
  while(m){
    r=r*((m%2)?n:1)%mod,n=n*n%mod,m>>=1;
  }
  return r;
}

ll fact[max_index];//i! (mod)
ll inv[max_index];//i^(-1) (mod)
ll invfact[max_index];//i!^(-1) (mod)

void calc_fact_invfact(){
  if(fact[0]==0){
    fact[0]=inv[1]=invfact[0]=1;
    for(ll i=2;i<max_index;i++) inv[i]=mod-inv[mod%i]*(mod/i)%mod;
    for(ll i=1;i<max_index;i++) fact[i] = fact[i-1]*i%mod,invfact[i]=invfact[i-1]*inv[i]%mod;
  }
}
ll nCk(int n,int k){
  if(n<k || k<0) return 0;
  else return fact[n]*invfact[k]%mod*invfact[n-k]%mod;
}

int main(){

  ll K;
  cin >> K;
  string s;
  cin >> s;

  ll len = s.length();
  ll ans=0;
  ll now;
  calc_fact_invfact();
  for(ll i=0;i<=K;i++){
    now=modpow(25,i)%mod;
    now=now*nCk(i+(len-1),len-1)%mod;
    now=now*modpow(26,K-i)%mod;
    now=(now+mod)%mod;
    ans=(ans+now+mod)%mod;
  }

  cout << (ans+mod)%mod << endl;
}
