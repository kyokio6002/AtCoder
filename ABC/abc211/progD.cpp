#include<bits/stdc++.h>
using namespace std;

#define INF 1001001001
#define mod 1000000007

int main(){

  int n,m;
  cin >> n >> m;

  vector<vector<int>> edge(n);
  vector<int> dist(n,INF);  //to,from
  
  int a,b;
  for(int i=0;i<m;i++){
    cin >> a >> b;
    a--,b--;
    edge[a].push_back(b);
    edge[b].push_back(a);
  }

  vector<int> order;
  queue<int> que;
  que.push(0);
  dist[0]=0;
  while(!que.empty()){
    int v=que.front();
    que.pop();
    order.push_back(v);

    for(auto nv:edge[v]){
      if(dist[nv]!=INF)continue;
      dist[nv]=dist[v]+1;
      que.push(nv);
    }
  }


  vector<int> ans(n);
  ans[0]=1;
  for(auto v:order){
    for(auto nv:edge[v]){
      if(dist[v]+1==dist[nv])ans[nv]=(ans[nv]+ans[v])%mod;
    }
  }

  cout << ans[n-1] << endl;

}
