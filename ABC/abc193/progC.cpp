#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){
  int n;
  cin >> n;

  map<ll,int> mp;

  ll ans=n;
  ll now;
  for(int a=2;a<(int)sqrt(n)+5;a++){
    now=a;
    for(int b=2;b<33;b++){
      if(now*a>n)break;
      now*=a;
      if(mp[now]==0){
        ans--;
        mp[now]++;
      }
    }
  }

  cout << ans << endl;
}
