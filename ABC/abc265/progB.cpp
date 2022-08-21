#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll n,m,t;
  cin >> n >> m >> t;

  vector<ll> a(n);
  for(int i=1;i<n;i++)cin >> a[i];

  ll x,y;
  vector<ll> b(n);
  for(int i=0;i<m;i++){
    cin >> x >> y;
    x-=1;
    b[x]=y;
  }

  for(int i=0;i<n;i++){
    t-=a[i];
    if(t<=0){
      cout << "No" << endl;
      return 0;
    }
    t+=b[i];
    // cout << "a:" << a[i] << endl;
    // cout << "b:" << b[i] << endl;
    // cout << "t:" << t << endl;
    if(t<1){
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

}
