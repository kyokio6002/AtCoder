#include <bits/stdc++.h>
using namespace std;

int main(){

  map<char,int> mp;
  mp['A']=0;
  mp['B']=3;
  mp['C']=4;
  mp['D']=8;
  mp['E']=9;
  mp['F']=14;
  mp['G']=23;

  char p,q;
  cin >> p >> q;
  int ans=mp[p]-mp[q];
  if(ans<0)cout << -ans << endl;
  else cout << ans << endl;

}
