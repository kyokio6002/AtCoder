#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){

  long long m=998244353;
  long long digit_max=1000000000;
  long long n=1;
  int q;
  cin >> q;

  int t;
  long long x;
  long long digit=1;
  while(q--){
    cin >> t;
    if(t==1){
      cin >> x;
      n=n*10+x;
    }else if(t==2){
      n=n%digit;
      digit/=10;
    }else if(t==3){
      n=n%m;
      digit=to_string(int(n)).length();
      cout << n << endl;
    }
    // cout << "n:" << n << endl;
    // cout << "digit:" << digit << endl;
  }
}
