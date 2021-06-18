#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  int n;
  cin >> n;

  vector<int> v(404);
  vector<int> a;

  int aa;
  ll ans=0;
  for(int i=0;i<n;i++){
    cin >> aa;
    a.push_back(aa);
    for(int j=-200;j<=200;j++){
      ans+=(ll)(a[i]-j)*(a[i]-j)*v[j+200];
    }
    v[aa+200]++;
  }
  cout << ans << endl;
}
