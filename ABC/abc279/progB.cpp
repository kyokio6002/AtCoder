#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main(){

  string s,t;
  cin >> s >> t;

  if(t.length()>s.length()){
    cout << "No" << endl;
    return 0;
  }

  if(s.compare(t)==0){
    cout << "Yes" << endl;
    return 0;
  }

  for(int si=0;si<s.length()-t.length()+1;si++){
    bool flag=true;
    for(int ti=0;ti<t.length();ti++){
      if(s[si+ti]!=t[ti])flag=false;
    }
    if(flag){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}
