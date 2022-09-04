#include<bits/stdc++.h>
using namespace std;

using ll=long long;


int main(){

  ll n,k;
  cin >> n >> k;

  vector<ll> a(n);
  for(int i=0;i<n;i++)cin >> a[i];
  vector<ll> sum(n);
  for(int i=0;i<n;i++)sum[i]=(!i?a[i]:sum[i-1]+a[i]);

  // cout << "a:";for(int i=0;i<n;i++)cout << a[i] << ",";cout << endl;
  // cout << "sum:";for(int i=0;i<n;i++)cout << sum[i] << ",";cout << endl;

  map<ll,ll> mp;
  ll ans=0;
  for(int i=0;i<n;i++){
    if(sum[i]==k)ans++;
    ll last=sum[i]-k;  // sum[i]-sum[j]==k i>j
    if(mp.count(last))ans+=mp[last];
    mp[sum[i]]++;

    // cout << "i:" << i+1 << endl;
    // cout << "a:";for(int j=0;j<=i;j++)cout << a[j] << ",";cout << endl;
    // cout << "sum:";for(int j=0;j<=i;j++)cout << sum[j] << ",";cout << endl;
    // cout << "a[i]:" << a[i] << endl;
    // cout << "sum[i]:" << sum[i] << endl;
    // cout << "last:" << last << endl;
    // for(auto v:mp)printf("(%lld,%lld),",v.first,v.second);cout << endl;
    // cout << "ans:" << ans << endl;
    // cout << endl;
  }

  cout << ans << endl;
}   
