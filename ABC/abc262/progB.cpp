#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;

  vector<vector<int>> edge(n);

  int u,v;
  for(int i=0;i<m;i++){
    cin >> u >> v;
    u--,v--;
    edge[u].push_back(v);
    edge[v].push_back(u);
  }

  // for(int i=0;i<n;i++){
  //   cout << i+1 << ":";
  //   for(auto v:edge[i]){
  //     cout << v+1 << ",";
  //   }cout << endl;
  // }

  int ans=0;
  for(int a=0;a<n-2;a++){
    for(int b=a+1;b<n-1;b++){
      for(int c=b+1;c<n;c++){
        if(find(edge[a].begin(),edge[a].end(), b)==edge[a].end())continue;
        if(find(edge[b].begin(),edge[b].end(), c)==edge[b].end())continue;
        if(find(edge[c].begin(),edge[c].end(), a)==edge[c].end())continue;
        ans++;
      }
    }
  }
  cout << ans << endl;
}
