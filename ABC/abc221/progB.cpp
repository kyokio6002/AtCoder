#include<bits/stdc++.h>
using namespace std;

int main(){

  string s,t;
  cin >> s >> t;

  for(int i=1;i<s.length();i++){
    if(s[i]==t[i-1] && s[i]!=t[i] && s[i-1]==t[i] && s[i]==t[i-1]){
      char c;
      c=s[i];
      s[i]=s[i-1];
      s[i-1]=c;
    }
  }

  // cout << s << endl;
  // cout << t << endl;

  if(s==t)cout << "Yes" << endl;
  else cout << "No" << endl;
}
