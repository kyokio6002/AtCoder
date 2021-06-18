#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  int a;
  int ans=0;
  while(n--){
    cin >> a;
    if(a<=10)continue;
    ans+=(a-10);
  }

  cout << ans << endl;
}
