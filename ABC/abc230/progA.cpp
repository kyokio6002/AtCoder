#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;

  int n=stoi(s);
  if(n>=42)n++;

  if(n<10)cout << "AGC00" << n << endl;
  else cout << "AGC0" << n << endl;

}
