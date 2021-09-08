#include<bits/stdc++.h>
using namespace std;

int main(){

  vector<string> ss(2);
  string s,t;
  cin >> s >> t;

  ss[0]=s;
  ss[1]=t;
  sort(ss.begin(),ss.end());

  if(ss[0]==s)cout << "Yes" << endl;
  else cout << "No" << endl;
}
