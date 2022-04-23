#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  map<int,pair<int,vector<int>>> mp;
  int a;
  for(int i=0;i<n;i++){
    cin >> a;
    for(int j=1;j<=int(sqrt(a));j++){
      if(a%j==0)mp[a].second.push_back(j);
    }
  }

  int ans=0;
  for(auto v:mp){
    int num=v.first;
    int count=v.second.first;
    vector<int> dis=v.second.second;

    for(int i=0;i<v.size();i++){
      if()
    }
  }

}
