#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  int q;
  cin >> q;
  ll n=int(pow(2,20));
  vector<int> a(n+1,-1);
  map<int,int> mp;
  for(int i=1;i<=n;i++)mp[i]++;

  int t,k;
  ll x;
  for(int i=0;i<q;i++){
    cin >> t >> x;
    k=int(x%n);
    if(t==1){
      int flag=0;
      if(!mp[k]){
        flag=1;
        mp[k]=0;
      }
      auto it=mp.find(k);
      // cout << "before:" << it->first%n << endl;
      if(flag)advance(it,1);
      // cout << "after:" << it->first%n << endl;
      a[it->first]=x;
      if(flag)mp.erase(mp.find(k));
      mp.erase(mp.find(it->first));
      // cout << x%n << ":" << a[k] << endl;
    }else{
      // cout << x%n << ":" << a[k] << endl;
      cout << a[x%n] << endl;
    }
  }
}
