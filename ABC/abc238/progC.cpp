#include <algorithm>
#include<bits/stdc++.h>
#include <string>
using namespace std;

#define mod 998244353
#define div2 499122177
using ll=long long;

ll llpow(ll num,ll time, ll m=1){
  ll ans=1;
  for(int i=0;i<time;i++)ans=ans*num%m;
  return ans;
}

int main(){

  ll n;
  cin >> n;
  int digit_of_n=to_string(n).length();
  // cout << "digit_of_n:" << digit_of_n << endl;

  ll ans=0;
  for(int digit=0;digit<digit_of_n-1;digit++){
    ll min_num=llpow(10,digit,mod);    // 10^2=100
    ll max_num=llpow(10,digit+1,mod);  // 10^3-1=999
    max_num--;
    ll count=(max_num-min_num+1)%mod;

    ll add=count*((min_num+max_num)%mod)%mod*div2%mod;
    ll sub=count*(min_num-1)%mod;

    // cout << "min_num:" << min_num << endl;
    // cout << "max_num:" << max_num << endl;;
    // cout << "count:" << count << endl;
    // cout << "add:" << add << endl;
    // cout << "sub:" << sub << endl;
    // cout << endl;
    
    ans=(ans+add)%mod;
    ans=(ans-sub)%mod;
    ans=(ans+mod)%mod;
  }

  ll min_num=llpow(10,digit_of_n-1,mod);
  ll max_num=n%mod;
  ll count=(max_num-min_num+1)%mod;
  
  ll add=count*((min_num+max_num)%mod)%mod*div2%mod;
  ll sub=count*(min_num-1)%mod;

  // cout << "min_num:" << min_num << endl;
  // cout << "max_num:" << max_num << endl;;
  // cout << "count:" << count << endl;
  // cout << "add:" << add << endl;
  // cout << "sub:" << sub << endl;
  // cout << endl;

  ans=(ans+add)%mod;
  ans=(ans-sub)%mod;
  ans=(ans+mod)%mod;

  cout << ans%mod << endl;

}
