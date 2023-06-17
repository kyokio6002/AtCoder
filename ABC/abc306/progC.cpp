#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){

  int n;
  cin >> n;

  map<int,vector<int>> mp; // num, index
  for(int i=0;i<3*n;i++){
    int t;
    cin >> t;
    mp[t].push_back(i+1);
  }

  vector<pair<int,int>> ans;
  for(int i=1;i<=n;i++){
    ans.push_back({mp[i][1],i});
  }

  sort(ans.begin(),ans.end());

  for(int i=0;i<n;i++){
    cout << ans[i].second << " ";
  }cout << endl;
}
