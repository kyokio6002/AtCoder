#include <iostream>
#include <vector>
using namespace std;
int n;
vector<vector<int>> edge;
vector<int> dist;
int ans=0;
vector<int> ans_trace;
bool done=false;

void dfs(int now, vector<int> &trace){

  dist[now]++;
  if(dist[now]==2){
    done=true;
    bool start=false;

    // cout << "now:" << now+1 << endl;
    // for(int i=0;i<trace.size();i++){
    //   cout << trace[i]+1 << " \n"[i==trace.size()-1];
    // }

    for(int i=0;i<trace.size();i++){
      if(trace[i]==now){
        if(!start)start=true;
        else{
          ans_trace.push_back(now);
          break;
        }
      }else{
        if(start){
          ans++;
          ans_trace.push_back(trace[i]);
        }
      }
    }
  }


  for(auto to: edge[now]){
    if(done)return;
    if(dist[to]>=2)continue;
    trace.push_back(to);
    dfs(to, trace);
    trace.pop_back();
  }
}

int main(){

  cin >> n;
  edge=vector<vector<int>>(n);
  dist=vector<int>(n);

  for(int i=0;i<n;i++){
    int to;
    cin >> to;to--;
    edge[i].push_back(to);
  }

  for(int i=0;i<n;i++){
    if(dist[i])continue;
    vector<int> trace;
    trace.push_back(i);
    dfs(i, trace);
  }

  cout << ans_trace.size() << endl;
  for(int i=0;i<ans_trace.size();i++)cout << ans_trace[i]+1 << " \n"[i==ans_trace.size()-1];

}
