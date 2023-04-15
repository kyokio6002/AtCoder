#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  string s;
  cin >> n >> s;

  int good=0;
  int bad=0;
  for(int i=0;i<n;i++){
    if(s[i]=='o')good++;
    if(s[i]=='x')bad++;
  }

  if(good && !bad)cout << "Yes" << endl;
  else cout << "No" << endl;
}
