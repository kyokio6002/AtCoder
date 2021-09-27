#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;
  int flag=0;
  int mod=10;

  if(s[0]==s[1] && s[1]==s[2] && s[2]==s[3] && s[3]==s[0])flag++;
  else if(((s[0]-'0')+1)%mod==(s[1]-'0') && ((s[1]-'0')+1)%mod==(s[2]-'0') && ((s[2]-'0')+1)%mod==(s[3]-'0'))flag++;

  if(flag)cout << "Weak" << endl;
  else cout << "Strong" << endl;


}

  
