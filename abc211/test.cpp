#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007;
vector<vector<int>> edge;
vector<vector<int>> dist;  //to,from
vector<int> cost;
int mintime=mod;
int ans;

void dfs(int v,int time,int last){
  //cout << v+1 << "→";
  if(v==last){
    if(mintime>=time){
      mintime=time;
      if(mintime==time)ans++;
      else ans=1;
    };
    mintime=time;
    return;
  }
  for(auto nv:edge[v]){
    if(dist[nv][v]>0)continue;
    dist[nv][v]++;
    //cout << nv+1 << endl;
    //cout << "time:" << time+1 << endl;
    //cout << "mintime:" << mintime << endl << endl;
    dfs(nv,time+1,last);
  }
  return;
}

int main(){

  int n,m;
  cin >> n >> m;
  int last=n-1;
  edge.resize(n);
  dist.resize(n,vector<int>(n));
  cost.resize(n);
  for(int i=0;i<n;i++)cost[i]=mod;
  cost[0]=0;
  
  int a,b;
  for(int i=0;i<m;i++){
    cin >> a >> b;
    a--,b--;
    edge[a].push_back(b);
    edge[b].push_back(a);
  }

  ans=0;
  dfs(0,0,last);

  cout << ans << endl;
}
