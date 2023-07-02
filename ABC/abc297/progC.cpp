#include <iostream>
#include <vector>
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

  int now=-1;
  int from;
  for(int i=0;i<n;i++){
    if(edge[i].size()==1)now=i;
  }
  if(now==-1 || n!=m+1){
    cout << "No" << endl;
    return 0;
  }

  for(int i=0;i<n;i++){
    if(i==0){
      from=now;
      now=edge[now][0];
    }else if(i==n-1){
      if(edge[now].size()==1){
        cout << "Yes" << endl;
      }else{
        cout << "No" << endl;
      }
    }else{
      if(edge[now].size()==2){
        if(edge[now][0]!=from){
          from=now;
          now=edge[now][0];
        }else{
          from=now;
          now=edge[now][1];
        }
      }else{
        cout << "No" << endl;
        return 0;
      }
    }
  }

}
