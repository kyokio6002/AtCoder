#include<bits/stdc++.h>
using namespace std;

int main(){

  string s,t;
  cin >> s >> t;

  int flag=0;
  for(int i=0;i<=26;i++){
    int count=0;
    for(int j=0;j<s.length();j++){
      if((s[j]-'a')==(((t[j]-'a')+i)%26))count++;
    }
    if(count==s.length())flag++;
  }

  if(flag)cout << "Yes" << endl;
  else cout << "No" << endl;

}
