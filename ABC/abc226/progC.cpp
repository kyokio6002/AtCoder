#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  int n;
  cin >> n;
  vector<map<int,int>> waza(n);

  ll t,k;
  int a;
  vector<ll> time(n);
  for(int i=0;i<n;i++){
    cin >> t >> k;
    time[i]=t;
    for(int _=0;_<k;_++){
      cin >> a;
      a--;
      waza[i][a]++;
    }
  }

  map<int,int> mp;
  mp[n-1]++;
  for(auto v:waza[n-1]){
    int next=v.first;
    mp[next]++;
    mp.merge(waza[next]);
  }
  ll ans=0;
  // for(auto v:mp)cout << v.first << ",";
  // cout << endl;
  for(auto v:mp)ans+=time[v.first];
  cout << ans << endl;
}
