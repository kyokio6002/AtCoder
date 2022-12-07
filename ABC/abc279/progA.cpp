#include <bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;

  int ans=0;
  for(int i=0;i<int(s.length());i++)ans+=(s[i]=='w'?2:1);
  cout << ans << endl;

}
