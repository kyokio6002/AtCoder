#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll k;
  cin >> k;
  string a,b;
  cin >> a >> b;

  ll aa=0;
  ll bb=0;
  ll d=1;
  for(int i=0;i<a.length();i++){
    if(a[a.length()-i-1]!='0'){
      aa+=((a[a.length()-i-1]-'0')*d);
    }
    d*=k;
  }
  d=1;
  for(int i=0;i<b.length();i++){
    if(b[b.length()-i-1]!='0'){
      bb+=((b[b.length()-i-1]-'0')*d);
    }
    d*=k;
  }

  // cout << aa << endl;
  // cout << bb << endl;

  cout << aa*bb << endl;

}
