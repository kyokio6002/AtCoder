#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;
  int len=s.length();
  for(int i=0;i<4-len;i++)s='0'+s;

  cout << s << endl;
}
