#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll n,m;
  cin >> n >> m;

  vector<ll> a(n);
  for(ll i=0;i<n;i++)cin >> a[i];

  ll m_set_sum=0;
  ll now=0;
  for(ll i=0;i<m;i++){
    now+=a[i]*(i+1);
    m_set_sum+=a[i];
  }


  ll ans=now;
  for(ll l=m;l<n;l++){
    now-=m_set_sum;
    now+=a[l]*m;
    m_set_sum-=a[l-m];
    m_set_sum+=a[l];
    if(ans<now)ans=now;
  }

  cout << ans << endl;
  
}
