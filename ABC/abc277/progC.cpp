#include <bits/stdc++.h>
using namespace std;

int n;
long long ans=0;
// <ハシゴの先,はしご番号>
map<long long,vector<pair<long long,int>>> edge;
map<long long,int> trace;


void dfs(long long now, vector<int> &used){
  ans=max(ans,now);
  trace[now]++;

  for(auto v:edge[now]){
    long long to=v.first;
    int index=v.second;

    if(used[index])continue;
    if(trace.count(to))continue;
    used[index]++;
    dfs(to, used);
    used[index]--;
  }
}

int main(){

  cin >> n;

  long long a,b;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    a--,b--;
    edge[a].push_back({b,i});
    edge[b].push_back({a,i});
  }

  vector<int> used(n);
  dfs(0, used);

  cout << ans+1 << endl;


}
