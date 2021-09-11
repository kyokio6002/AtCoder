#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;

  vector<queue<int>> a(m);
  int b,k;
  for(int i=0;i<m;i++){
    map<int,int> mp;
    cin >> k;
    for(int j=0;j<k;j++){
      cin >> b;
      mp[b]++;
      a[i].push(b);
    }
    if(mp.size()!=k){
      cout << "No" << endl;
      return 0;
    }
  }

  int empty_count=0;
  while(1){
    map<int,pair<int,int>> mp;
    int flag=1;
    for(int i=0;i<m;i++){
      // cout << "hole:" << i << endl;
      if(a[i].empty()){
        empty_count++;
        continue;
      }
      int t=a[i].front();
      mp[t].first++;
      // cout << "mp:" << mp[t].first << endl;
      // cout << "mp:" << mp[t].second << endl;
      if(mp[t].first==2){
        a[i].pop();
        a[mp[t].second].pop();
        flag=0;
      }
      mp[t].second=i;
    }
    if(empty_count==m)break;
    if(flag){
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
