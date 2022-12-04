#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int n,k;
  cin >> n >> k;

  vector<int> a(n);
  for(int i=0;i<n;i++)cin >> a[i];

  for(int i=0;i<n;i++){
    if(i+k>n)cout << 0 << " \n"[i==n];
    else cout << a[i+k] << " ";
  }

}
