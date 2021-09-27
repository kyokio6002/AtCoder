#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n,q;
  cin >> n >> q;

  int INF=1001001007;
  vector<vector<int>> edge(n);
  int a,b;
  for(int i=0;i<n-1;i++){
    cin >> a >> b;
    a--,b--;
    edge[a].push_back(b);
    edge[b].push_back(a);
  }

  vector<int> dist(n,-1);
  queue<int> que;
  dist[0]=0;
  que.push(0);
  while(!que.empty()){
    int v=que.front();
    que.pop();

    for(int nv: edge[v]){
      if(dist[nv]!=-1)continue;
      dist[nv]=dist[v]+1;
      que.push(nv);
    }
  }

  int c,d;
  int ans;
  for(int i=0;i<q;i++){
    cin >> c >> d;
    c--,d--;
    ans=abs(dist[c]-dist[d]);
    if(ans%2)cout << "Road" << endl;
    else cout << "Town" << endl;
  }
}
