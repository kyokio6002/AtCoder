#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll n;
  cin >> n;

  ll now=1;
  cout << 'A';
  while(1){
    now*=2;
    if(now>=n){
      if(now==n){
        cout << 'B' << endl;
        return 0;
      }
      if(n-now>=100100100){
        cout << 'A';
        now/=2;
        now++;
        continue;
      }
      now/=2;
      for(int i=0;i<n-now;i++){
        cout << 'A';
      }
      cout << endl;
      break;
    }
    cout << 'B';
  }
}
