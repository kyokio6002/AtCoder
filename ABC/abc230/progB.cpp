#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;

  string t;
  for(int i=0;i<4;i++)t+="oxx";
  // cout << t << endl;

  int flag=0;
  int count=0;
  for(int i=0;i<3;i++){
    count=0;
    for(int j=0;j<s.length();j++){
      if(t[j+i]==s[j])count++;
      // cout << t[j+i];
    }
    // cout << endl;
    if(count==s.length())flag++;
    // cout << count << endl;
  }

  if(flag)cout << "Yes" << endl;
  else cout << "No" << endl;

}
