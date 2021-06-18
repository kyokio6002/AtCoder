#include<bits/stdc++.h>
using namespace std;

int main(){

  string s,t;
  cin >> s >> t;
  bool flag=1;
  bool change=0;

  for(int i=0;i<3;i++){
    if(s[i]==t[i]);
    else if((s[i]+32)==t[i]) change=1;
    else if(s[i]==(t[i]+32)) change=1;
    else flag=0;
  }

  if(flag==0) cout << "different" << endl;
  else if(flag==1 && change==1) cout << "case-insensitive" << endl;
  else cout << "same" << endl;
}
