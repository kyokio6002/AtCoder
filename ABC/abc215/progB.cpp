#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll n;
  cin >> n;

  ll k=0;
  ll now=1;
  for(int i=0;i<n;i++){
    k++;
    now*=2;
    if(now>n){
      k--;
      break;
    }
  }

  cout << k << endl;

}
