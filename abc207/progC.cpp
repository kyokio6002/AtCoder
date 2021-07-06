#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  int n;
  cin >> n;
  map<int,pair<pair<int,int>,pair<int,int>>> mp;

  int t,l,r;
  for(int i=0;i<n;i++){
    cin >> t >> l >> r;
    if(t==1){
      mp[l].first.first++;
      mp[r].second.first++;
    }else if(t==2){
      mp[l].first.first++;
      mp[r].second.second++;
    }else if(t==3){
      mp[l].first.second++;
      mp[r].second.first++;
    }else if(t==4){
      mp[l].first.second++;
      mp[r].second.second++;
    }
  }

  
  int now=0;
  ll ans=0;
  pair<int,int> add,dis;
  for(auto point:mp){
    add=point.second.first;
    dis=point.second.second;
    now-=dis.second;
    ans+=now*add.first+max(0,add.first+add.second-1);
    now+=add.first+add.second-dis.first;
  }

  cout << ans << endl;
}
