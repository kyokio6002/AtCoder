#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll n,k;
  cin >> n >> k;

  map<ll,ll> mp;
  ll a,b;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    mp[a]+=b;
  }

  ll posi,tip;
  ll prio=0;
  ll dist;
  for(auto v:mp){
    posi=v.first;
    tip=v.second;
    // ここまでの距離
    dist=posi-prio;
    // 到達できる
    if(k-dist>=0){
      k-=dist;
      k+=tip;
      prio=posi;
    }else{
      cout << prio+k << endl;
      return 0;
    }

    // cout << "posi:" << posi << endl;
    // cout << "k:" << k << endl;
    // cout << "prio:" << prio << endl;
  }

  cout << prio+k << endl;
}
