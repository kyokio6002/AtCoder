#include<bits/stdc++.h>
using namespace std;

#define mod 998244353
using ll=long long;

ll fact[200002];//i! (mod)
ll inv[200002];//i^(-1) (mod)
ll invfact[200002];//i!^(-1) (mod)


//(n^m)%mod
ll modpow(ll n, ll m=mod-2) {
	ll r=1;
	while(m){
    /*cout << "r:" << r << endl;
    cout << "m:" << bitset<16>(m) << endl;
    cout << "n:" << n << endl << endl;*/
    r=r*((m%2)?n:1)%mod,n=n*n%mod,m>>=1;
  }
	return r;
}

void calc_fact_invfact(){
  if(fact[0]==0){
    fact[0]=inv[1]=invfact[0]=1;
    for(int i=2;i<200002;i++) inv[i]=mod-inv[mod%i]*(mod/i)%mod;
    for(int i=1;i<200002;i++) fact[i] = fact[i-1]*i%mod,invfact[i]=invfact[i-1]*inv[i]%mod;
  }
}
ll nCk(int n,int k){
  if(n<k || k<0) return 0;
  else return fact[n]*invfact[k]%mod*invfact[n-k]%mod;
}

int main(){

  int n,m,k;
  cin >> n >> m >> k;

  ll ans = 0;

  calc_fact_invfact();
  for(int i=0;i<=k;i++){
    cout << nCk(n-1,i)%mod*(m%mod)%mod << endl;
    cout << ans << endl << endl;
    ans += nCk(n-1,i)*m%mod*modpow(m-1,n-1-i)%mod;
  }

  cout << ans%mod << endl;

}


//参考URL https://kmjp.hatenablog.jp/entry/2020/05/10/0900
