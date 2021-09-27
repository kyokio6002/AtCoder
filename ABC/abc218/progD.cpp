#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  map<int,map<int,int>> mp;

  int x,y;
  for(int i=0;i<n;i++){
    cin >> x >> y;
    mp[x][y]++;
  }

  vector<int> xs;
  for(auto x:mp)xs.push_back(x.first);

  int ans=0;
  for(int i=0;i<xs.size();i++){
    //iと比較
    for(int j=i+1;j<xs.size();j++){
      int count=0;
      for(auto y:mp[xs[j]]){
        if(mp[xs[i]][y.first]!=0)count++;
      }
      ans+=(count*(count-1))/2;
      // cout << "x1:" << xs[i] << endl;
      // cout << "x2:" << xs[j] << endl;
      // cout << count << endl;
    }
  }

  cout << ans << endl;
}

