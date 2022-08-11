#include<bits/stdc++.h>
#include <string>
using namespace std;

int main(){
  
  int n;
  cin >> n;
  vector<string> s(n);
  string ss;
  s[0]=" 1";
  for(int i=1;i<n;i++){
    ss=' '+to_string(i+1);
    s[i]=s[i-1]+ss+s[i-1];
  }
  cout << s[n-1];
  cout << endl;
}
