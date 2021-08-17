#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cin >> n;

  int ans=4;
  if(n>=126 && n<=211)ans+=2;
  else if(n>=212 && n<=214)ans+=4;

  cout << ans << endl;
}
