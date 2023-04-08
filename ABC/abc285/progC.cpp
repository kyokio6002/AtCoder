#include <bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;
  long long ans=0;
  long long digit=1;

  while(s.length()){
    ans=ans+(long long)(s.back()-'A'+1)*digit;
    digit*=26;
    s.pop_back();
  }
  cout << ans << endl;
}
