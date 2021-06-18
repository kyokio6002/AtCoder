#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  int N;
  cin >> N;

  vector<ll> num(N+1);
  ll ans=0;
  for(ll i=1;i<=N;i++){
    for(ll j=i;j<=N;j=j+i){
      num[j]++;
    }
    ans+=i*num[i];
  }

  cout << ans << endl;
}
