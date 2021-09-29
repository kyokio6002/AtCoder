#include<bits/stdc++.h>
using namespace std;

using ll=long long;

ll culc(string now,ll next){
  ll sum=0;
  vector<ll> n(10);
  for(int i=1;i<10;i++)n[i]=i;
  for(int i=0;i<4;i++)n[now[i]-'0']*=10;
  n[next]*=10;

  for(int i=1;i<10;i++)sum+=n[i];

  return sum;
}


int main(){

  ll k;
  cin >> k;
  string s,t;
  cin >> s >> t;

  map<ll,ll> mp;
  for(ll i=1;i<10;i++)mp[i]=k;
  for(ll i=0;i<4;i++){
    mp[(s[i]-'0')]--;
    mp[(t[i]-'0')]--;
  }

  ll aoki,taka;
  ll ans=0;
  for(ll i=1;i<10;i++){
    if(mp[i]<1)continue;
    taka=culc(s,i);
    for(ll j=1;j<10;j++){
      aoki=culc(t,j);
      if(i==j && taka>aoki)ans+=(mp[i])*(mp[i]-1);
      else if(taka>aoki)ans+=(mp[i]*mp[j]);
    }
  }

  // cout << "ans:" << ans << endl;
  double p = double(ans)/(9*k-8)/(9*k-9);
  cout << p << endl;
}
