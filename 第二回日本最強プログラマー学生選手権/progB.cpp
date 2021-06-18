#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;
  vector<int> ab(n+m);
  vector<int> b(m);
  for(int i=0;i<n+m;i++)cin >> ab[i];
  sort(ab.begin(),ab.end());
  map<int,int> mp;

  int prio=ab[0];
  for(int i=0;i<n+m;i++){
    mp[ab[i]]++;
  }

  for(auto i:mp){
    if(i.second==1)cout << i.first << " ";
  }cout << endl;
}
