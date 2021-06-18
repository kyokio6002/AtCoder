#include<bits/stdc++.h>
using namespace std;

#define mod 998244353
#define max_index 200002
using ll=long long;

ll fact[max_index];//i! (mod)
ll inv[max_index];//i^(-1) (mod)
ll invfact[max_index];//i!^(-1) (mod)

//(n^m) (mod)
//ll m=mod-2は逆元を求める時にこの関数を使う場合に引数を省略して描けるためのもの
ll modpow(ll n,ll m=mod-2){
  ll r=1;
  while(m){
    cout << "r:" << r << endl;//rは結果
    cout << "m:" << m << "(" << bitset<16>(m) << ")" << endl;//mは2進数で表されてこれが味噌
    cout << "n:" << n << endl << endl;//nはn^mで更新することでループを減らす
    //指数の分解をしてループ回数を減らしてる
    r=r*((m%2)?n:1)%mod,n=n*n%mod,m>>=1;
  }
  return r;
}

//ここでnCmを計算するためのfact,invfact(invfactを出すためのinv)を計算してる
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
  int n,m;
  cin >> n >> m;

  calc_fact_invfact();//これを忘れない
  cout << "pow(n,m):" << modpow(n,m) << endl;
  cout << "nCk:" << nCk(n,m) << endl;
}
