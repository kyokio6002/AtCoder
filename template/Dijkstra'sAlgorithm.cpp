#include<bits/stdc++.h>
using namespace std;

#define INF 1e+9
#define MAX_V 10


struct edge{
  int to;
  int cost;
};

using P = pair<int,int>;//その点までの最短距離、その点の番号

int V;
vector<edge> G[MAX_V];//各店のedge配列(動的配列と静的配列が組み合わさった二次元配列)
int d[MAX_V];

void dijkstra(int s){
  //cout << INF << ":" << MAX_V << ":" << sizeof d << endl;
  priority_queue<P,vector<P>,greater<P>> que;//プライオリティーキュー(P型の配列を降順に並び替える)
  fill(d, d+V, INF);//BFSのdistと同じ(初期値をすべてINFに初期化する)

  d[s] = 0;//スタート地点の点をdistance0に変更
  que.push(P(0,s));//priority_queueに最初のqueueを入れる

  while(!que.empty()){
    P p = que.top();//front()だとコンパイルが通らない
    que.pop();
    int v = p.second;//その点の番号を入手


    if(d[v] < p.first) continue;
    /*すでに求めた最短経路(もしくは未探索でINFのとき)よりも現在選択されている点からいく場合の方が長い場合は操作しない
    →操作するときはqueに入ってる最安経路を書き直すかINFだったのを書き換えて新しく入れるかだから

    選択されてる点(v)は作業が終了すると確定される
    →選択した点から行ける点(G[i]ないの点)で作業しその点はqueに入れるか入ってるものを更新される

    つまりここでcontinueされるのは、探索済みで現在最短距離としてd[v]に登録されているのが
    他の点から行った時にqueueに登録されたもの(他の点からいったときが最短のとき)である
    */

    for(int i=0;i<G[v].size();i++){
      edge e = G[v][i];//行ける点の情報(行先,コスト)をもらう
      if(d[e.to] > d[v] + e.cost){
        d[e.to] = d[v]+e.cost;//toにいくコストを更新
        que.push(P(d[e.to],e.to));//priority_queueに預ける
      }
    }
  }


}

int main(){
  cin >> V;//点の個数
  int E;//辺の数
  cin >> E;
  for(int i=0;i<E;i++){
    int a,b,c;//始点,終点,コスト
    cin >> a >> b >> c;
    edge e = {b,c};//終点,コスト
    G[a].push_back(e);
  }

  dijkstra(0);//ダイクストラを点(0)から始める

  for(int i=0;i<V;i++){
    if(d[i]!=INF){
      cout << "0から" << i << "までのコスト:" << d[i] << endl;
    }
  }

}
