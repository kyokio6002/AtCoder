#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  int q;
  cin >> q;

  map<ll,ll> mp;

  int qu;
  ll x;
  ll bias=0;
  vector<ll> ans;
  for(int i=0;i<q;i++){
    cin >> qu;
    if(qu==1){
      cin >> x;
      mp[x-bias]++;
    }else if(qu==2){
      cin >> x;
      bias+=x;
    }else{
      for(auto v:mp){
        ans.push_back(v.first+bias);
        mp[v.first]--;
        if(mp[v.first]==0)mp.erase(v.first);
        break;
      }
    }

    // cout << "now:" << endl;
    // cout << "bias:" << bias << endl;
    // for(auto v:mp){
    //   cout << v.first+bias << "(" << v.second << "),";
    // }cout << endl;
  }

  for(auto v:ans)cout << v << endl;

}
