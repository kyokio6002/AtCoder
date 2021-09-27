#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  int ans=0;
  int a=0;
  int b=10000;
  for(int i=0;i<n;i++){
    int aa;
    cin >> aa;
    a=max(a,aa);
  }
  for(int i=0;i<n;i++){
    int bb;
    cin >> bb;
    b=min(b,bb);
  }

  // cout << "a:" << a << endl;
  // cout << "b:" << b << endl;
  ans=max(0,(b-a+1));

  cout << ans << endl;
}
