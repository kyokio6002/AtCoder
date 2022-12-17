#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  string s;
  cin >> s;

  bool flag=false;
  for(int i=0;i<s.length();i++){
    if(s[i]=='\"'){
      if(flag)flag=false;
      else flag=true;
    }

    if(!flag && s[i]==',')s[i]='.';
  }

  cout << s << endl;
}
