#include<bits/stdc++.h>
using namespace std;

using ll=long long;

ll check(vector<pair<ll,ll>> vt){
  ll n = vt.size();
  for(int i=0;i<n;i++) vt[i].first=min(vt[i].first,n);
  vector<vector<ll>> vs(n+1);
  for(int i=0;i<n;i++) vs[vt[i].first].emplace_back(vt[i].second);
  priority_queue<ll> que;
  ll ans=0;
  for(int i=n;i>0;i--){
    for(auto u:vs[i]){
      que.push(u);
    }
    if(!que.empty()){
      ans+=que.top();
      que.pop();
    }
  }
  return ans;
}

void solve(){

  int n;
  cin >> n;

  ll k,l,r;
  ll ans = 0;
  vector<pair<ll,ll>> right,left;
  ll m;
  for(int i=0;i<n;i++){
    cin >> k >> l >> r;

    if(l>r){
      ans+=r;
      left.emplace_back(k,l-r);
    }else{
      ans+=l;
      right.emplace_back(n-k,r-l);
    }
  }
  ans+=check(left);
  ans+=check(right);
  cout << ans << endl;
}

int main(){

  ll t;
  cin >> t;
  for(ll i=0;i<t;i++){
    solve();
  }
}
