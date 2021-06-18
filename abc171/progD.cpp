#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){

  int N;
  cin >> N;

  map<int,int> mp;
  int a;
  for(int i=0;i<N;i++){
    cin >> a;
    mp[a]++;
  }

  int Q;
  cin >> Q;

  ll ans=0;
  for(auto u:mp){
    ans+=u.first*u.second;
  }

  ll b,c;
  ll num;
  ll distance;
  for(int j=0;j<Q;j++){
    cin >> b >> c;
    num=mp[b];
    distance=(c-b)*mp[b];
    mp.erase(b);
    mp[c]+=num;
    ans+=distance;
    cout << ans << endl;
  }
}
