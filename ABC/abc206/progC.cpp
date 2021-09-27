#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  int n;
  cin >> n;
  map<int,ll> mp;
  int a;
  ll sum=0;
  ll ans=0;
  for(int i=0;i<n;i++){
    cin >> a;
    mp[a]++;
    sum++;
    ans+=sum-mp[a];
  }

  cout << ans << endl;

}
