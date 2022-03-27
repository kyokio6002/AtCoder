#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,q;
  cin >> n >> q;
  vector<int> a(n);
  map<int,vector<int>> mp;

  for(int a,i=0;i<n;i++){
    cin >> a;
    mp[a].push_back(i+1);
  }

  for(int x,k,i=0;i<q;i++){
    cin >> x >> k;
    if(mp[x].size()<k)cout << -1 << endl;
    else cout << mp[x][k-1] << endl;
  }
}
