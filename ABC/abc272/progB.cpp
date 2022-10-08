#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;
  int k;

  vector<vector<int>> x(n); // iが参加したパーティー
  vector<vector<int>> party(m); // パーティーjに参加した人
  for(int i=0;i<m;i++){
    cin >> k;
    for(int j=0;j<k;j++){
      int a;
      cin >> a;a--;
      x[a].push_back(i);
      party[i].push_back(a);
    }
  }


  for(int i=0;i<n;i++){
    vector<int> check(n);
    for(int j=0;j<x[i].size();j++){
      for(int k=0;k<party[x[i][j]].size();k++){
        check[party[x[i][j]][k]]++;
      }
    }
    for(int j=0;j<n;j++){
      if(!check[j]){
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
}
