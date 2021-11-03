#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;

  int len=s.length();
  if(s[len-2]=='e' && s[len-1]=='r')cout << "er" << endl;
  else cout << "ist" << endl;
}
