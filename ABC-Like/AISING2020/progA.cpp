#include<bits/stdc++.h>
using namespace std;

int main(){

  int l,r;
  int num;
  int ans=0;
  cin >> l >> r >> num;
  for(int i=l;i<=r;i++){
    if(i%num==0) ans++;
  }

  cout << ans << endl;
}
