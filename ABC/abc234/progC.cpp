#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll k;
  cin >> k;
  string ans;
  while(1){
    if(k==0)break;
    if(k&1)ans.push_back('2');
    else ans.push_back('0');
    k = k>>1;
  }

  reverse(ans.begin(),ans.end());
  cout  << ans << endl;
}
