#include<bits/stdc++.h>
using namespace std;

using ll=long long;

ll lcm(ll a, ll b){
  return a*b/gcd(a, b);
}

int main(){

  ll n,a,b;
  cin >> n >> a >> b;

  ll count_a=n/a;
  ll count_b=n/b;
  ll ab=lcm(a,b);
  ll count_ab=n/ab;

  ll sum_a=a*count_a*(count_a+1)/2;
  ll sum_b=b*count_b*(count_b+1)/2;
  ll sum_ab=ab*count_ab*(count_ab+1)/2;
  ll sum=n*(n+1)/2;

  // cout << "sum_a:" << sum_a << endl;
  // cout << "sum_b:" << sum_b << endl;
  // cout << "sum_ab:" << sum_ab << endl;
  // cout << "sum:" << sum << endl;
 
  cout << sum-sum_a-sum_b+sum_ab << endl;

}
