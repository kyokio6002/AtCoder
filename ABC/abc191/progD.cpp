#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  double doublex,doubley,doubler;
  cin >> doublex >> doubley >> doubler;

  ll x,y,r;
  x=ll(round(doublex*10000));
  y=ll(round(doubley*10000));
  r=ll(round(doubler*10000));

  ll buttom=-r+y%10000;
  ll dx;
  ll right,left;
  ll ans=0;

  cout << endl;
  cout << "butotom:" << buttom << endl;
  cout << "x:" << x/10000 << endl;
  cout << "y:" << y/10000 << endl;
  cout  << "r:" << r/10000 << endl;
  cout << endl;

  for(ll i=buttom;i<=buttom+2*r;i+=10000){
    dx=ll(pow((double)r*r-(double)(i+(y%10000))*(i-(y%10000)),0.5));
    right=(x+dx)/10000;
    left=(x-dx)/10000;


    cout << "y:" << i << endl;
    cout << "right:" << right << endl;
    cout << "left:" << left << endl;
    cout << "ans:" << (right-left)+1 << endl;
    cout << endl;

    ans+=right-left;
    ans++;
  }

  cout << ans << endl;

}
