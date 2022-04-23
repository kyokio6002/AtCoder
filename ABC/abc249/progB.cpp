#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;

  int flag1=0;
  int flag2=0;
  map<char,int> mp;

  for(int i=0;i<s.length();i++){
    // 大文字判定
    if(s[i]-'A'>=0 && s[i]-'A'<26)flag1++;
    if(s[i]-'a'>=0 && s[i]-'a'<26)flag2++;
    mp[s[i]]++;
  }

  if(flag1 && flag2 && mp.size()==s.length())cout << "Yes" << endl;
  else cout << "No" << endl;
}
