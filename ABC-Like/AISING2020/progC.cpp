#include<bits/stdc++.h>
using namespace std;

using ll=long long;

ll cul(ll x,ll y,ll z){
  ll ans = x*x+y*y+z*z+x*y+y*z+z*x;
  return ans;
}


int main(){

  ll n;
  cin >> n;
  vector<ll> f(n+1,0);

  ll num;
  for(ll x=1;x<n;x++){
    for(ll y=1;y<=x;y++){
      for(ll z=1;z<=y;z++){
        num=cul(x,y,z);
        if(num>n){
          break;
        }
        if(x==y && y==z){
          f[num]++;
        }else if(x==y || y==z || x==z){
          f[num]+=3;
        }else{
          f[num]+=6;
        }
      }
    }
  }

  for(int i=1;i<=n;i++){
    cout << f[i] << endl;
  }
}
