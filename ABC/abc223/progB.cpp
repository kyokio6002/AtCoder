#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;
  string ss;
  string ans_min=s,ans_max=s;
  for(int i=0;i<s.length();i++){
    ss=s.substr(1,s.length()-1)+s[0];
    s=ss;
    if(s>=ans_max)ans_max=s;
    if(s<=ans_min)ans_min=s;
  }

  cout << ans_min << endl;
  cout << ans_max << endl;

}
