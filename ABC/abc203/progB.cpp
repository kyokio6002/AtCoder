#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;

  int ans=k*(k+1)/2*n+n*(n+1)*100*k/2;
  cout << ans << endl;
}
