#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;
  vector<vector<int>> edge(n);
  vector<int> dist(n);
  int a,b;
  for(int i=0;i<m;i++){
    cin >> a >> b;
    a--,b--;
    if(a>b){
      edge[a].push_back(b);
      dist[b]=1;
    }
  }

  vector<int> ans;
  for(int i=0;i<n;i++){
    if(dist[i])continue;
    ans.push_back(i+1);
    for(int j=0;j<edge[i].size();j++){
      ans.push_back(edge[i][j]+1);
    }
  }

  if(ans.size()!=n)cout<< -1 << endl;
  else{
    for(int i=0;i<n;i++)cout << ans[i] << " ";
    cout << endl;
  }
}
