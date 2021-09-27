#include<bits/stdc++.h>
using namespace std;

int main(){
  int seap;
  int wolf;

  cin >> seap >> wolf;

  if(seap <= wolf) cout << "unsafe" << endl;
  else if(seap > wolf) cout << "safe" << endl;
  else cout << "error" << endl;
}
