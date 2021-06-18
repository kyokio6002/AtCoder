#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  string s;
  cin >> n >> s;

  if(s.length()>n){
    for(int i=0;i<n;i++){
      cout << s[i];
    }
    cout << "..." << endl;
  }else{
    cout << s << endl;
  }
}
