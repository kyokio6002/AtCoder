#include<bits/stdc++.h>
using namespace std;

using ll=long long;
vector<vector<ll>> a;
ll ans=0;
ll x;
int n;

void dfs(int step, ll now){
  // cout << step << "," << (step+1==n) << endl;
  if(step+1==n){
    for(auto v:a[step]){
      if(now*v==x)ans++;
    }
    return;
  }
  for(auto v:a[step]){
    if(now*v>x && step!=0)return;
    // cout << " to " << step+1 << endl;
    dfs(step+1, now*v);
  }
}

int main(){

  cin >> n >> x;
  vector<vector<ll>> b(n);
  a=b;
  int l;
  ll t;
  for(int i=0;i<n;i++){
    cin >> l;
    for(int j=0;j<l;j++){
      cin >> t;
      a[i].push_back(t);
    }
    sort(a[i].begin(),a[i].end());
  }

  dfs(0,1);

  cout << ans << endl;

}
