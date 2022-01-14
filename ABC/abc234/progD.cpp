#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;

  vector<int> a(n);
  vector<int> p;
  for(int i=0;i<n;i++){
    cin >> a[i];
    if(i<k-1)p.push_back(a[i]);
  }

  sort(p.begin(),p.end());
  for(int end=k-1;end<n;end++){
    auto it = lower_bound(p.begin(),p.end(),a[end]);
    p.insert(it,a[end]);
    // for(int i=0;i<p.size();i++)cout << p[i] << ",";
    // cout << endl;
    cout << p[end-(k-1)] << endl;
  }
}
