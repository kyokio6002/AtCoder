#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define max_index 202
#define mod 1000000007
ll mod=9223372036854775807;
ll fact[max_index];//i! (mod)
ll inv[max_index];//i^(-1) (mod)
ll invfact[max_index];//i!^(-1) (mod)

void calc_fact_invfact(){
  if(fact[0]==0){
    fact[0]=inv[1]=invfact[0]=1;
    for(int i=2;i<max_index;i++) inv[i]=mod-inv[mod%i]*(mod/i)%mod;
    for(int i=1;i<max_index;i++) fact[i] = fact[i-1]*i%mod,invfact[i]=invfact[i-1]*inv[i]%mod;
  }
}
//これでコンビネーションを計算してる
ll nCk(int n,int k){
  if(n<k || k<0) return 0;
  else return fact[n]*invfact[k]%mod*invfact[n-k]%mod;
}

int main(){

	ll n;
	cin >> n;
	ll ans;
	calc_fact_invfact();
	ans=nCk((n-1),11);

	cout << ans << endl;
}
