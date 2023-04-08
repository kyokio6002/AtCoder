#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  string s;
  cin >> s;
  s=' '+s;

  for(int i=1;i<n;i++){
    int ans=0;
    for(int l=1;l<=n-i;l++){
      if(s[l]==s[l+i])break;
      ans++;
    }
    cout << ans << endl;
  }

}
