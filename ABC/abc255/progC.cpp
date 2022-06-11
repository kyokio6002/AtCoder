#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll x,a,d,n;
  cin >> x >> a >> d >> n;

  ll ans=0;
  if(d==0){
    ans=a-x;
    cout << abs(ans) << endl;
    return 0;
  }

  ll mina=0;
  ll maxa=0;

  if(d<0){
    maxa=a;
    mina=a+(n-1)*d;
  }else{
    mina=a;
    maxa=a+(n-1)*d;
  }

  // cout << "mina:" << mina << endl;
  // cout << "maxa:" << maxa << endl;

  if(x<mina)ans=mina-x;
  else if(x>maxa)ans=maxa-x;
  else{
    ll t=x-a;
    ll time=t/d;
    // cout << "time:" << time << endl;
    x-=a;
    ans=min(abs(time*d-x), abs((time+1)*d-x));
  }

  cout << abs(ans) << endl;

}

