#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  int q;
  cin >> q;
  int n=int(pow(2,20));
  vector<ll> a(n+5,-1);
  map<int,int> mp;
  for(int i=0;i<n;i++)mp[i]=1;

  int t,h;
  ll x;
  for(int _=0;_<q;_++){
    cin >> t >> x;
    h=int(x%(ll)n);
    if(t==1){
      // 検索用に追加
      int flag=0;
      if(mp[h]==0){
        flag=1;
        mp[h]=-1;
      }
      map<int,int>::iterator  it=mp.find(h);
      if(flag){
        if(it->first==mp.rbegin()->first)it=mp.begin();
        else it++;
      }
      a[it->first]=x;
      if(flag)mp.erase(mp.find(h));
      mp.erase(it);
    }else{
      cout << a[h] << endl;
    }
  }

}
