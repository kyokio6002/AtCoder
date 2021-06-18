#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;

  vector<vector<int>> edge(n);
  int a,b;
  for(int i=0;i<m;i++){
    cin >> a >> b;a--;b--;
    edge[a].push_back(b);
    edge[b].push_back(a);
  }


}
