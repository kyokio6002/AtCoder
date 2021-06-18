#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int a,b,c;
  cin >> a >> b >> c;

  if(a<b)cout << "Aoki" << endl;
  else if(b<a) cout << "Takahashi" << endl;
  else{
    if(c==0)cout << "Aoki" << endl;
    else cout << "Takahashi" << endl;
  }

}
