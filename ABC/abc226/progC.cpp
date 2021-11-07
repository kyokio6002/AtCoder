#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  int n;
  cin >> n;
  vector<vector<int>> waza(n);

  ll t,k;
  int a;
  vector<ll> time(n);
  for(int i=0;i<n;i++){
    cin >> t >> k;
    time[i]=t;
    for(int _=0;_<k;_++){
      cin >> a;
      a--;
      waza[i].push_back(a);
    }
  }

  map<int,int> mp;
  mp[n-1]++;
  queue<int> que;
  for(auto v:waza[n-1])que.push(v);

  int now;
  while(!que.empty()){
    now=que.front();
    que.pop();
    if(mp[now])continue;
    mp[now]++;
    for(auto v:waza[now])que.push(v);
  }

  ll ans=0;
  for(auto [i,v]:mp)ans+=time[i];
  cout << ans << endl;

}
