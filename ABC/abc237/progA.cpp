#include<bits/stdc++.h>
using namespace std;

using ll=long long;
int main(){

  ll n;
  cin >> n;
  ll k=ll(pow(2,31));
  if(n>=-k && n<k)cout << "Yes" << endl;
  else cout << "No" << endl;
}
