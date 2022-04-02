#include<bits/stdc++.h>
using namespace std;

using ll=unsigned long long;
// using ll=long long;

int main(){

  ll n;
  cin >> n;
  //ll ans=1000000000000000000;
  ll ans=9223372036854775807;
  ll end=1000000;
  ll ab=end;


  for(ll a=0;a<=end+1;a++){
    for(ll b=a;b<=end+1;b++){
      if(a+b>ll(pow(10,6)+1))break;
      ll now=a*a*a+a*a*b+a*b*b+b*b*b;
      //ll now=(a+b)*(a*a+b*b);
      //cout << "now:" << now << endl;
      if(now>=n){
        if(ans>now){
          ans=now;
        }
        //cout << "ans:" << ans << endl;
      }
    }
  }

  cout << ans << endl;
}
