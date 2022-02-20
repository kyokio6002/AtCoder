#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){
  
  int n,x;
  cin >> n >> x;
  vector<int> a(n);
  vector<int> b(n);
  int mins=0,maxs=0;
  for(int i=0;i<n;i++)cin >> a[i] >> b[i];

  map<int,int> mp;
  mp[a[0]]++;
  mp[b[0]]++;
  for(int i=1;i<n;i++){
    map<int,int> nmap;
    for(auto v:mp){
      if(v.first>x)continue;
      nmap[v.first+a[i]]++;
      nmap[v.first+b[i]]++;
    }
    mp=nmap;
  }

  if(mp[x])cout << "Yes" << endl;
  else cout << "No" << endl;
}

