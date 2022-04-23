#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  // 数字,<個数,[約数]>
  map<int,pair<int,vector<int>>> mp;
  int a;
  for(int i=0;i<n;i++){
    cin >> a;
    mp[a].first++;
    for(int j=1;j<=int(sqrt(a));j++){
      if(a%j==0){
        mp[a].second.push_back(j);
        if(a==j*j)continue;
        mp[a].second.push_back(a/j);
      }
    }
  }

  int ans=0;
  for(auto v:mp){
    int num=v.first;
    vector<int> dis=v.second.second;
    cout << "num:" << num << endl;
    for(int i=0;i<dis.size();i++){
      cout << dis[i] << "," << num/dis[i] << endl;
      cout << mp[dis[i]].first << "," << mp[num/dis[i]].first << endl;
      if(dis[i]*dis[i]==num){
        ans+=mp[dis[i]].first*(mp[dis[i]].first-1)*2;
        cout << "add:" << mp[dis[i]].first*(mp[dis[i]].first-1)*2 << endl;
      }else if(dis[i]==1){
        ans+=mp[dis[i]].first*(mp[num/dis[i]].first-1);
        cout << "add:" << mp[dis[i]].first*(mp[num/dis[i]].first-1) << endl;
      }else if(dis[i]==num){
        ans+=(mp[dis[i]].first-1)*mp[num/dis[i]].first;
        cout << "add:" << (mp[dis[i]].first-1)*mp[num/dis[i]].first << endl;
      }else if(dis[i]==num/dis[i]){
        cout << "not add" << endl;
      }else{
        ans+=mp[dis[i]].first*mp[num/dis[i]].first;
        cout << "add:" << mp[dis[i]].first*mp[num/dis[i]].first << endl;
      }
    }
    cout << endl;
  }

  cout << ans << endl;
}
