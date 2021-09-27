#include<bits/stdc++.h>
using namespace std;

using ll=long long;

struct UnionFind{

  vector<ll> par;  // par[i]:iの親の番号 ex)par[3]=2→'3の親が2'
  vector<ll> siz;  // 各木のサイズ

  // コンストラクタ
  UnionFind(int n): par(n), siz(n,1){
    for(int i=0;i<n;i++)par[i]=i;
  }

  // root検索(値を検索する)
  int root(int x){
    if(par[x]==x)return x;
    return par[x]=root(par[x]);
  }

  // 結合
  void unite(int x,int y){
    int rx=root(x);
    int ry=root(y);
    if(rx==ry)return;
    par[rx]=ry;
    siz[ry]+=siz[rx];
  }

  // 同じ木か確認する
  bool same(int x,int y){
    int rx=root(x);
    int ry=root(y);
    return rx==ry;
  }

  // 木のサイズを返す
  ll size(int x){
    return siz[root(x)];
  }
};

int main(){

  int n;
  cin >> n;
  vector<pair<int,pair<int,int>>> edge(n); //{w,{u,v}}
  ll u,v,w;
  for(int i=0;i<n-1;i++){
    cin >> u >>  v >> w;
    u--,v--;
    edge.push_back(make_pair(w,make_pair(u,v)));
  }

  UnionFind uni(n);
  sort(edge.begin(),edge.end());
  ll ans=0;
  for(auto t:edge){
    w=t.first;
    u=t.second.first;
    v=t.second.second;
    ans+=uni.size(u)*uni.size(v)*w;
    uni.unite(u,v); //size()でroot検索するから順番はどっちでもいい
  }

  cout << ans << endl;

}

