#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;
    int ans=0;
    for(int i=0;i<n;i++){
      int k;
      cin >> k;
      if(k%2)ans++;
    }
    cout << ans << endl;
  }
}
