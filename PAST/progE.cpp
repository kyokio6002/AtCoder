#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m,q;
  cin >> n >> m >>q;

  vector<int> edge[n];
  vector<int> col(n);

  int u,v;
  for(int i=0;i<m;i++){
    cin >> u >> v;u--;v--;
    edge[u].push_back(v);
    edge[v].push_back(u);
  }

  int nowcol;
  for(int i=0;i<n;i++){
    cin >> nowcol;
    col[i]=nowcol;
  }

  int check;
  int nowedge;
  int x,y;
  //vector<int> out;
  for(int i=0;i<q;i++){
    cin >> check;
    if(check==1){
      cin >> nowedge;nowedge--;
      //out.push_back(col[nowedge]);
      cout << col[nowedge] << endl;
      for(auto to:edge[nowedge]){
        col[to]=col[nowedge];
      }
    }else{
      cin >> x >> y;x--;
      //out.push_back(col[x]);
      cout << col[x] << endl;
      col[x]=y;
    }
  }

  // for(int t=0;t<out.size();t++){
  //   cout << out[t] << endl;
  // }
}
