#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll a,b,k;
  cin >> a >> b >> k;
  ll sum=a;
  int ans=0;
  while(sum<b){
    sum=sum*k;
    ans++;
  }

  cout << ans << endl;
}
