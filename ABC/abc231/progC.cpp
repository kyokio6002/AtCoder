#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,q;
  cin >> n >> q;
  vector<int> a(n);
  vector<int> b(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
    b[i]=a[i];
  }
  sort(a.begin(),a.end());

  // for(int i=0;i<n;i++)cout << a[i] << ",";
  // cout << endl;
  
  int x;
  for(int i=0;i<q;i++){
    cin >> x;
    auto it=lower_bound(a.begin(),a.end(),x);

    auto ans=distance(a.begin(),it);
    cout << n-ans << endl;
  }


}

