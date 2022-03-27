#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;
  int a=(s[0]-'0');
  int b=(s[1]-'0');
  int c=(s[2]-'0');

  int ans=(a+b+c)*(100+10+1);
  cout << ans << endl;

}
