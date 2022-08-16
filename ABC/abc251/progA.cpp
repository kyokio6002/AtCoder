#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;

  int len_s=s.length();
  for(int i=0;i<6/len_s;i++)cout << s;
  cout << endl;
}
