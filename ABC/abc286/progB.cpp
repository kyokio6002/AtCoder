#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){

  int n;
  cin >> n;
  string s;
  cin >> s;
  string ans="";
  ans+=s[0];

  for(int i=1;i<s.length();i++){
    if(s[i-1]=='n' && s[i]=='a')ans=ans+"y";
    ans=ans+s[i];
  }

  cout << ans << endl;
}
