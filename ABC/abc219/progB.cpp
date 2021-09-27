#include<bits/stdc++.h>
using namespace std;

int main(){

  vector<string> s(3);
  cin >> s[0] >> s[1] >> s[2];
  string t;
  cin >> t;
  string ans="";
  for(int i=0;i<t.length();i++){
    int j=(t[i]-'0')-1;
    ans+=s[j];
  }

  cout << ans << endl;

}
