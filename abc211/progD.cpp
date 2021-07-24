#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main(){

  int n,m;
  cin >> n >> m;

  vector<vector<int>> edge(n);
  vector<vector<int>> dist(n,vector<int>(n));  //to,from
  vector<int> ans(n);
  vector<int> time(n,mod);
  
  int a,b;
  for(int i=0;i<m;i++){
    cin >> a >> b;
    a--,b--;
    edge[a].push_back(b);
    edge[b].push_back(a);
  }

  queue<pair<int,int>> que;
  pair<int,int> p;
  que.push(make_pair(0,1));

  ans[0]++;
  time[0]=0;
  for(int i=0;i<n;i++)dist[0][i]=0;
  while(!que.empty()){
    p=que.front();
    int v=p.first;
    int count=p.second;
    que.pop();

    for(auto nv:edge[v]){
      if(dist[nv][v])continue;  // 多分これで大丈夫
      dist[nv][v]++;
      que.push(make_pair(nv,ans[nv]));
      // 早い時
      if(time[nv]>=time[v]+1){
        if(time[nv]==time[v]+1){
          ans[nv]+=ans[v]+1;
          ans[nv]=ans[nv]%mod;
        }else{
          ans[nv]=ans[v];
        }
        time[nv]=time[v]+1;
      }
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout << dist[i][j] << " ";
    }cout << endl;
  }cout << endl;
  for(int i=0;i<n;i++){
    cout << ans[i] << " ";
  }cout << endl;
  for(int i=0;i<n;i++){
    cout << time[i] << " ";
  }cout << endl;

  cout << ans[n-1] << endl;
}
