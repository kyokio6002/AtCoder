#include<bits/stdc++.h>
using namespace std;

using P = pair<int,int>;

int main(){

  int N,M;
  cin >> N >> M;

  vector<int> edge[N];
  vector<int> dist(N,-1);
  vector<int> inSum(N,0);

  for(int i=0;i<M;i++){
    int now,to;
    cin >> now >> to;now--;to--;
    inSum[to]++;
    edge[now].push_back(to);
  }

  //BFS
  int ans=0;
  queue<int> que;//(行先と)
  for(int i=0;i<N;i++){
    if(inSum[i]==0){
      que.push(i);
      dist[i]=0;
    }
  }

  while(!que.empty()){
    int now = que.front();
    que.pop();
    for(auto to:edge[now]){
      inSum[to]--;
      if(inSum[to]==0){
        que.push(to);
        dist[to]=dist[now]+1;
        ans=max(ans,dist[to]);
      }
    }
  }

  cout << ans << endl;
}
