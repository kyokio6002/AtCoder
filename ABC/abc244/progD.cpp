#include<bits/stdc++.h>
using namespace std;

int main(){

  vector<char> s(3);
  vector<char> t(3);
  cin >> s[0] >> s[1] >> s[2];
  cin >> t[0] >> t[1] >> t[2];

  if(t[0]==s[0]){
    if(t[1]==s[1]){
      cout << "Yes" << endl;
    }else if(t[1]==s[2]){
      cout << "No" << endl;
    }
  }else if(t[0]==s[1]){
    if(t[1]==s[0]){
      cout << "No" << endl;
    }else if(t[1]==s[2]){
      cout << "Yes" << endl;
    }
  }else if(t[0]==s[2]){
    if(t[1]==s[0]){
      cout << "Yes" << endl;
    }else if(t[1]==s[1]){
      cout << "No" << endl;
    }
  }
}
