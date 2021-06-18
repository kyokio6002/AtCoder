#include<bits/stdc++.h>
using namespace std;

#define INF 1e+9
#define MAX_S 2500
#define MAX_N 55

struct edge{
  int to;
  int cost;
  int time;
};

struct edge2{
  int to;
  int cost;
  int time;
  int money;
}

using P = pair<int,int>;

vector<edge> G[MAX_N];
vector<edge> G2[MAX_N][2500];//新し辺を貼り直したグラフ
vector<P> change(MAX_N);


void dijikstora(int start){
  priority_queue<P,vector<P>,greater<P>> que;
}


int main(){
  int N,M,S;
  cin >> N >> M >> S;
  for(int i=0;i<M;i++){
    int u,v,a,b;
    cin >> u >> v >> a >> b;u--;v--;
    edge eu = {v,a,b};
    edge ev = {u,a,b};
    G[u].push_back(eu);
    G[v].push_back(ev);
  }
  for(int i=0;i<N;i++){
    int c,d;
    cin >> c >> d;
    P p(c,d);
    change[i] = p;
  }

  /*cout << endl << N << ";" << M << ":" << S << endl;
  for(int i=0;i<N;i++){
    cout << i << endl;
    for(int j=0;j<G[i].size();j++){
      cout << G[i][j].to << " " << G[i][j].cost << " " << G[i][j].time << " ";
    }
    cout << endl;
  }
  cout << endl;
  for(int i=0;i<N;i++){
    cout << change[i].first << "," << change[i].second << endl;
  }*/

  for(int i=0;i<N;i++){
    for(int j=0;j<2500;j++){
      G2[i][j].push_back();
    }
  }

}
