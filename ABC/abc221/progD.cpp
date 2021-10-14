#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  int n;
  cin >> n;
  int a,b;
  map<int,ll> mp;

  for(int i=0;i<n;i++){
    cin >> a >> b;
    mp[a]++;
    mp[a+b]--;
  }

  vector<ll> ans(n+1);
  int num=0;
  int prio=-1;
  for(auto v:mp){
    if(prio==-1){
      num+=v.second;
      prio=v.first;
    }else{
      ans[num]+=ll(v.first)-prio;
      num+=v.second;
      prio=v.first;
    }
  }

  for(int i=1;i<=n;i++)cout << ans[i] << " ";
  cout << endl;
}
