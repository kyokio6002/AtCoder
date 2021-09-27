#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  string s;
  cin >> s;
  int ans=0;
  ll num=1;
  string nums;
  while(1){
    nums=to_string(num)+to_string(num);
    if(stoll(nums)>stoll(s))break;
    ans++;
    num++;
  }

  cout << ans << endl;

}
