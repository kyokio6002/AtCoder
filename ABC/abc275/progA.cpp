#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  int ans=0;
  int max_h=0;
  int h;
  for(int i=0;i<n;i++){
    cin >> h;
    if(max_h<h)ans=i+1,max_h=h;
  }
  cout << ans << endl;
}
