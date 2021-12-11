#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;
  vector<vector<int> > edge(n);
  int a,b;
  for(int i=0;i<m;i++){
    cin >> a >> b;
    a--,b--;
    edge[a].push_back(b);
    edge[b].push_back(a);
    // 接続が2点以上あればNo
    if(edge[a].size()>2 || edge[b].size()>2){
      cout << "No" << endl;
      return 0;
    }
  }

  vector<int> starts;
  for(int i=0;i<n;i++){
    if(edge[i].size()<2)starts.push_back(i);
  }

  vector<int> dist(n);

  for(int i=0;i<starts.size();i++){
    int start=starts[i];
    if(dist[start])continue;
    queue<int> que;
    que.push(start);
    while(!que.empty()){
      int v=que.front();
      que.pop();

      dist[v]++;
      if(edge[v].size()==1){
        if(v==start)que.push(edge[v][0]);
      }else if(edge[v].size()==2){
        int next1=edge[v][0];
        int next2=edge[v][1];
        if(dist[next1]!=0 && dist[next2]!=0){
          cout << "No" << endl;
          return 0;
        }else if(dist[next1]==0 && dist[next2]==0){
          cout << 100/0 << endl;
        }else if(dist[next1]==0){
          que.push(next1);
        }else if(dist[next2]==0){
          que.push(next2);
        }
      }
    }
  }

  int count=0;
  for(int i=0;i<n;i++){
    if(dist[i])count++;
  }

  if(count!=n)cout << 100/0 << endl;
  cout << "Yes" << endl;


}
