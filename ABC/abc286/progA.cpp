#include <bits/stdc++.h>
using namespace std;

int main(){

  int n,p,q,r,s;
  cin >> n >> p >> q >> r >> s;
  p--,q--,r--,s--;
  
  vector<int> a(n);
  for(int i=0;i<n;i++)cin >> a[i];

  for(int i=r;i<=s;i++){
    int tmp=a[i];
    a[i]=a[p+(i-r)];
    a[p+(i-r)]=tmp;
  }

  for(int i=0;i<n;i++)cout << a[i] << " \n"[i==n-1];
}
