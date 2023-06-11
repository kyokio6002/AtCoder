#include <bits/stdc++.h>
using namespace std;

int main(){
  
  string s;
  cin >> s;
  char c;
  int ans=0;
  while(s.length()>0){
    if(s.length()>=2){
      c=s.back();
      s.pop_back();
      if(c=='0' && s.back()=='0'){
        s.pop_back();
      }
    }else{
      s.pop_back();
    }
    ans++;
  }
  cout << ans << endl;
}
