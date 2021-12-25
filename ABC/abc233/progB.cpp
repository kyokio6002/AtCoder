#include<bits/stdc++.h>
using namespace std;

int main(){

  int l,r;
  cin >> l >> r;
  l--,r--;
  string s;
  cin >> s;

  int count=0;
  for(int i=0;i<s.length();i++){
    if(i>=l && i<=r){
      cout << s[r-count];
      count++;
    }else{
      cout << s[i];
    }
  }
  cout << endl;

}
