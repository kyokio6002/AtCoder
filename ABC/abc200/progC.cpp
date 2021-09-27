#include<bits/stdc++.h>
using namespace std;

using ll =long long;

int main(){

  ll n;
  ll ans=0;
  cin >> n;

  map<ll,ll> mp;
  ll num;
  for(int i=0;i<n;i++){
    cin >> num;
    num%=200;
    ans+=mp[num];
    mp[num]++;
  }

  cout << ans << endl;

}
