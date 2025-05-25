#include <cstdio>
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

  string s;
  cin >> s;

  for(int i=0;i<26;i++){
    bool flag=true;
    char c = 'a'+i;
    for(int j=0;j<int(s.length());j++){
      if(c==s[j])flag=false;
    }
    if(flag){
      printf("%c\n", 'a'+i);
      break;
    }
  }
}
