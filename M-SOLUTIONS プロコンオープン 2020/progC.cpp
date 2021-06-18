#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  int n,k;
  cin >> n >> k;

  vector<ll> a(n);
  vector<ll> b(n-k);
  ll sum=1;
  for(int i=0;i<n;i++){
    cin >> a[i];
    if(i>=k){
      if(a[i]>a[i-(k-1)-1]){
        cout << "Yes" << endl;
      }else{
        cout << "No" << endl;
      }
    }
  }


}
