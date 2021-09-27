#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;

  int len = s.length()-1;
  int last = len;
  int head = 0;
  for(int i=0;i<s.length();i++){
    if(s[len-i]!='0'){
      last = len-i;
      break;
    }
  }
  cout << "last:" << last << endl;

  while(1){
    if(s[last] != s[head]){
      cout << "No" << endl;
      return 0;
    }else{
      last--;
      head++;
    }
    if(last-head<=1){
      cout << "Yes" << endl;
      return 0;
    }
  }

}
