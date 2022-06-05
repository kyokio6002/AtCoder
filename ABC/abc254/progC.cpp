#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;

  vector<vector<int>> a(k);
  int t;
  for(int i=0;i<n;i++){
    cin >> t;
    a[i%k].push_back(t);
  }

  for(int i=0;i<k;i++){
    sort(a[i].begin(),a[i].end());
    // for(int j=0;j<a[i].size();j++)cout << a[i][j] << " ";
    // cout << endl;
  }

  vector<int> nn;
  int count=0;
  for(int i=0;i<n/k+1;i++){
    for(int j=0;j<k;j++){
      count++;
      if(count>n)continue;
      nn.push_back(a[j][i]);
    }
  }

  int flag=0;
  // cout << nn[0] << " ";
  for(int i=1;i<n;i++){
    if(nn[i-1]>nn[i])flag++;
    // cout << nn[i] << " ";
  }
  // cout << endl;

  if(flag)cout << "No" << endl;
  else cout << "Yes" << endl;

}
