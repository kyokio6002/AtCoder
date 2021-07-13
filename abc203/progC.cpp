#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll n,k;
  cin >> n >> k;
  map<ll,ll> mp; 

  int a,b;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    mp[a]+=b;
  }

  ll prio=0;
  ll pay;
  for(auto v:mp){
    pay=v.first-prio;
    if(k<pay){
      cout << prio+k << endl;
      return 0;
    }
    k-=pay;
    prio=v.first;
    k+=v.second;
  }

  cout << prio+k << endl;
  
}
