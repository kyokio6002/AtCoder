#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  string s;

  cin >> n >> s;

  for(int i=0;i<n;i++){
    if(s[i]=='0')continue;
    if(i%2==0)cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;
    break;
  }
}
