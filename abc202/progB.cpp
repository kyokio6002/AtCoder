#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;
  int len=s.length();
  for(int i=0;i<len;i++){
    if(s[len-i-1]=='6')cout << '9';
    else if(s[len-i-1]=='9')cout << '6';
    else cout << s[len-i-1];
  }cout << endl;
}
