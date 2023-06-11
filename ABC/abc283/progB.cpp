#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin >> a[i];
  int q;
  cin >> q;
  while(q--){
    int t,k,x;
    cin >> t;
    if(t==1){
      cin >> k >> x;k--;
      a[k]=x;
    }else{
      cin >> k;k--;
      cout << a[k] << endl;
    }
  }
}
