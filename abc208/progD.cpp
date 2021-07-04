#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;
  vector<vector<pair<int,int>>> edge(n+1);

  int a,b,c;
  for(int i=0;i<m;i++){
    cin >> a >> b >> c;
    edge[a].push_back(make_pair(b,c));
  }


}
