#include <bits/stdc++.h>
using namespace std;

int main(){

  int n,x;
  cin >> n >> x;

  int p;
  for(int i=0;i<n;i++){
    cin >> p;
    if(p==x)cout << i+1 << endl;
  }
}
