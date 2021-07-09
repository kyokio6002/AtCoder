#include<bits/stdc++.h>
using namespace std;

using ll = long long;

struct border{
  int in;
  int out;
};

int main(){

  int n;
  cin >> n;
  map<int,pair<border,border>> mp;

  int t,l,r;
  for(int i=0;i<n;i++){
    cin >> t >> l >> r;
    if(t==1){
      mp[l].first.in++;
      mp[r].second.in++;
    }else if(t==2){
      mp[l].first.in++;
      mp[r].second.out++;
    }else if(t==3){
      mp[l].first.out++;
      mp[r].second.in++;
    }else if(t==4){
      mp[l].first.out++;
      mp[r].second.out++;
    }
  }

  
  int now=0;
  ll ans=0;
  border add,dis;
  for(auto point:mp){
    add=point.second.first;
    dis=point.second.second;
    now-=dis.out;
    ans+=dis.in*add.in;
    now-=dis.in;
    ans+=now*(add.in+add.out);
    ans+=max(0,(add.in+add.out)*(add.in+add.out-1)/2);
    now+=add.in+add.out;
  }

  cout << ans << endl;
}
