#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
vector<vector<int>> edge;
vector<int> dist;  // from→to
vector<int> mincosts;  // from→to
int mincost=100100100;
int ans=0;

void dfs(int v,int from,int cost,int last){
  dist[v]++;
  mincosts[v]=min(mincosts[v],cost);
  // cout << "v:" << v+1 << endl;
  // cout << "mincost:" << mincost << endl;
  // cout << "cost:" << cost << endl;
  // cout << "ans:" << ans << endl << endl;

  if(v==last){
    // cout << "bmincost:" << mincost << endl;
    // cout << "cost:" << cost << endl;
    // cout << "bans:" << ans << endl;
    if(mincost>=cost){
      if(cost==mincost)ans++;
      else{
        ans=1;
        mincost=cost;
      }
      // cout << "amincost:" << mincost << endl;
      // cout << "aans:" << ans << endl << endl;
    }
    ans=ans%mod;
    return;
  }

  if(cost>=mincost)return;
  for(auto nv:edge[v]){
    int nowcost=cost;
    if(dist[nv]>0 && nv!=last && mincosts[nv]<=cost)continue;
    // cout << "cost[v]:" << nowcost << " " << v+1 << endl;
    // cout << "goto:" << nv+1 << endl << endl;
    dfs(nv,v,nowcost+1,last);
  }
  return;
}

int main(){

  int n,m;
  cin >> n >> m;

  edge.resize(n);
  dist.resize(n);
  mincosts.resize(n);
  for(int i=0;i<n;i++)mincosts[i]=100100100;
  int a,b;
  for(int i=0;i<m;i++){
    cin >> a >> b;
    a--,b--;
    edge[a].push_back(b);
    edge[b].push_back(a);
  }

  dfs(0,0,0,n-1);

  cout << ans << endl;
}
