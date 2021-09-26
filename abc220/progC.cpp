#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll n;
  cin >> n;
  vector<ll> a(n);
  ll asum=0;
  for(int i=0;i<n;i++){
    cin >> a[i];
    asum+=a[i];
  }

  ll x;
  cin >> x;


  ll ans=n*(x/asum);
  ll lost=x%asum;
  ll sum=0;

  int flag=0;
  while(1){
    for(int i=0;i<n;i++){
      sum+=a[i];
      ans++;
      if(sum>lost){
        flag++;
        break;
      }
    }
    if(flag)break;
  }

  cout << ans << endl;

}
