#include<bits/stdc++.h>
using namespace std;

struct UnionFind{

  vector<int> par;  // par[i]:iの親の番号 ex)par[3]=2→'3の親が2'
  vector<int> siz;  // 各木のサイズ

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
  bool is_same(int x,int y){
    int rx=root(x);
    int ry=root(y);
    return rx==ry;
  }

  // 木のサイズを返す
  int size(int x){
    return siz[root(x)];
  }
};
