#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll n,p,q,r;
  cin >> n >> p >> q >> r;
  vector<ll> a(n); 
  vector<ll> sum(n);
  map<ll,int> mp;
  ll ss=0;
  for(int i=0;i<n;i++){
    cin >> a[i];
    ss+=a[i];
    sum[i]=ss;
    mp[ss]=i;
  }

  // for(auto v:mp){
  //   cout << v.first << ",";
  // }cout << endl;

  for(int x=0;x<n;x++){
    int y=-1,z=-1,w=-1;
    int flag=0;
    if(x==0){
      if(mp.count(p))y=mp[p];
    }else{
      if(mp.count(p+sum[x-1]))y=mp[p+sum[x-1]]+1;
      if(y<=x)continue;
    }

    if(mp.count(q+sum[y-1]))w=mp[q+sum[y-1]]+1;
    if(w<=y)continue;
    if(mp.count(r+sum[w-1]))z=mp[r+sum[w-1]]+1;
    if(z<=w)continue;

    // printf("%d,%d,%d,%d\n",x,y,w,z);

    if(z>w && w>y && y>x && w>=0 && z>=0 && y>=0 && x>=0){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}
