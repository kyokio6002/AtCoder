#include<bits/stdc++.h>
using namespace std;

int main(){

  int v,t,s,d;
  cin >> v >> t >> s >> d;

  int td=v*t;
  int sd=v*s;
  if(td<=d && sd>=d) cout << "No" << endl;
  else cout << "Yes" << endl;

}
