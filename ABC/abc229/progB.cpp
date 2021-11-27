#include<bits/stdc++.h>
using namespace std;

int main(){

  string a,b;
  cin >> a >> b;
  int flag=0;
  int len=min(a.length(),b.length());
  int sum;
  for(int i=0;i<len;i++){
    sum=(a[a.length()-1-i]-'0')+(b[b.length()-1-i]-'0');
    if(sum>=10)flag=1;
  }

  if(flag)cout << "Hard" << endl;
  else cout << "Easy" << endl;
}
