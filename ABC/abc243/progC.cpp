#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> x(n);
  vector<int> y(n);
  vector<char> dir(n);

  map<int,vector<pair<int,char>>> mp;
  
  for(int i=0;i<n;i++)cin >> x[i] >> y[i];
  for(int i=0;i<n;i++)cin >> dir[i];


  for(int i=0;i<n;i++)mp[y[i]].push_back({x[i],dir[i]});

  int ans=0;
  for(auto v:mp){
    char dir;
    vector<pair<int,char>> ps=v.second;
    int flag=0;
    sort(ps.begin(),ps.end());
    for(int i=0;i<ps.size();i++){
      dir=ps[i].second;
      if(!flag && dir=='R')flag++;
      else if(flag && dir=='L')ans++;
    }
  }

  if(ans)cout << "Yes" << endl;
  else cout << "No" << endl;
}
