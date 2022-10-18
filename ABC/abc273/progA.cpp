#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;n++;

  int ans=1;
  while((n--)-1)ans=n*ans;

  cout << ans << endl;

}
