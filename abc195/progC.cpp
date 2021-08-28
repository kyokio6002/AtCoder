#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll n;
  cin >> n;

  ll set=0;
  ll t=n;
  while(1){
    t=t/1000;
    if(t<=0)break;
    set++;
  }


  ll now=1000;
  ll ans=1;
  for(int digit=1;digit<set;digit++){
    now*=1000;
    ans+=(now-now/1000)*digit;
  }

  ans+=(n-now)*set;
  ans+=(set-1);
  cout << ans << endl;

}
