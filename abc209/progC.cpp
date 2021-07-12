#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
using ll=long long;

int main(){

  int n;
  cin >> n;

  ll ans=1;
  vector<int> c(n);
  for(int i=0;i<n;i++)cin >> c[i];

  sort(c.begin(),c.end());

  for(int i=0;i<n;i++){
    // cout << "c:" << c[i] << endl;
    // cout << "ans:" << ans << endl << endl;
    ans=ans*(c[i]-i)%mod;
  }



  cout << ans << endl;
}
