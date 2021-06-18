#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  int n,q;
  cin >> n >> q;
  vector<ll> a(n);
  for(int i=0;i<n;i++)cin >> a[i];

  vector<ll> not_a(n);
  for(int i=0;i<n;i++)not_a[i]=a[i]-(i+1);

  ll k;
  ll ans;
  ll index;
  while(q--){
    cin >> k;
    index = lower_bound(not_a.begin(), not_a.end(), k) - not_a.begin();
    if(index==0)ans = k;
    else ans = a[index-1] + (k-not_a[index-1]);

    cout << ans << endl;
  }
}
