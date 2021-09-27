#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define max_index 2000
using ll = long long;

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

ll nCk(int n,int k){
  if(n<k || k<0) return 0;
  else return fact[n]*invfact[k]%mod*invfact[n-k]%mod;
}

int main(){

	int s;
	cin >> s;
	ll ans=0;
	ll now;
	calc_fact_invfact();
	for(int i=1;i<=s/3;i++){
		now=nCk(s-3*i+i-1,i-1);
		ans=(ans+now)%mod;
	}

	cout << ans << endl;
}
