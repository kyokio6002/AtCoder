#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  ll n,a,x,y;
  cin >> n >> a >> x >> y;

  ll ans=0;
  for(ll i=1;i<=n;i++){
    if(i>a)ans+=y;
    else ans+=x;
  }

  cout << ans << endl;

}
