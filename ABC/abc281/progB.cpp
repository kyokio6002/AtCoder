#include <bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;

  if(s.length()!=8){
    cout << "No" << endl;
    return 0;
  }

  if(!(s[0]>='A' && s[0]<='Z') || !(s[s.length()-1]>='A' && s[s.length()-1]<='Z')){
    cout << "No" << endl;
    return 0;
  }

  if(!(s[1]>='1' && s[1]<='9')){
    cout << "No" << endl;
    return 0;
  }
  for(int i=2;i<s.length()-1;i++){
    if(!(s[i]>='0' && s[i]<='9')){
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
