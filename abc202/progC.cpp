#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  int n;
  cin >> n;
  
  map<int,int> a;
  vector<int> b(n);
  vector<int> c(n);
  
  for(int i=0;i<n;i++){
    int num;
    cin >> num;
    a[num]++;
  }
  for(int i=0;i<n;i++)cin >> b[i];
  for(int i=0;i<n;i++)cin >> c[i];
  
  map<int,int> d;
  for(int i=0;i<n;i++)d[b[c[i]-1]]++;

  // cout << "a:";
  // for(auto e:a)cout << e.first << ":" << e.second << ",";
  // cout << endl;
  // cout << "d:";
  // for(auto e:d)cout << e.first << ":" << e.second << ",";
  // cout << endl;
  ll ans=0;
  for(auto e:a){
    ans+=ll(d[e.first])*e.second;
  }

  cout << ans << endl;

}
