#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;

  char c;
  for(int i=0;i<s.length();i++){
    c=s[i];
    if(i%2==1){
      if((c-'A')>=0 && (c-'A')<=26)continue;
      else{
        cout << "No" << endl;
        return 0;
      }
    }else{
      if((c-'a')>=0 && (c-'a')<=26)continue;
      else{
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
}

