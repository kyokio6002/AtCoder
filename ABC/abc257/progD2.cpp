#include<bits/stdc++.h>
using namespace std;

using ll=long long;
struct jump{
  int x;
  int y;
  int p; 
};

int main(){

  int n;
  cin >> n;
  vector<jump> jumps; // x,y,p
  for(int i=0;i<n;i++){
    cin >> jumps[i].x >> jumps[i].y >> jumps[i].p;
  }

  // ダイクストラ
  for(int i=0;i<n;i++){
    priority_queue<pair<int,int>> que;
    vector<int> dist(n);
    que.push({0,i});
    dist[i]++;
    while(!que.empty()){
      int s=que.top().first;
      int now=que.top().second;
      que.pop();

      for(int next=0;next<n;next++){
        ll len=abs(jumps[now].x-jumps[next].x)+abs(jumps[now].y-jumps[next].y);

      }
    }
  }
  

}
