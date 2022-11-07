#include <bits/stdc++.h>
using namespace std;

int main(){

  int ans=-1;
  string s;
  cin >> s;
  for(int i=0;i<s.length();i++){
    if(s[i]=='a')ans=i+1;
  }

  cout << ans << endl;
}
