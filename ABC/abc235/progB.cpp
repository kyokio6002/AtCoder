#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  int ans=0;

  for(int t,i=0;i<n;i++){
    cin >> t;
    if(ans>=t)break;
    ans=t;
  }

  cout << ans << endl;

}
