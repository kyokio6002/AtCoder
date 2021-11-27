#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll n,w;
  cin >> n >> w;
  vector<pair<ll,ll>> ps(n);
  for(int i=0;i<n;i++)cin >> ps[i].first >> ps[i].second;
  sort(ps.rbegin(),ps.rend());

  ll last=w;
  ll ans=0;
  for(int i=0;i<n;i++){
    if(ps[i].second<=last){
      ans+=ps[i].first*ps[i].second;
      last-=ps[i].second;
    }else{
      ans+=last*ps[i].first;
      last=0;
      break;
    }
  }

  cout << ans << endl;


}
