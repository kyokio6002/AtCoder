#include<bits/stdc++.h>
#include <utility>
#include <vector>
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
  bool same(int x,int y){
    int rx=root(x);
    int ry=root(y);
    return rx==ry;
  }

  // 木のサイズを返す
  int size(int x){
    return siz[root(x)];
  }
};

bool is_next(int v1,int v2){
  int v1x=v1/10000;
  int v1y=v1%10000;
  int v2x=v2/10000;
  int v2y=v2%10000;

  vector<pair<int,int>> dist={
    {-1,-1},
    {-1,0},
    {0,-1},
    {0,1},
    {1,0},
    {1,1},
  };

  for(auto d:dist){
    int addx=d.first;
    int addy=d.second;
    if(v1x+addx==v2x && v1y+addy==v2y)return true;
  }

  return false;
}

int main(){

  int n;
  cin >> n;
  map<pair<int,int>,int> mp;
  int x,y;
  UnionFind  uni(30002000);
  vector<int> stack;
  for(int i=0;i<n;i++){
    cin >> x >> y;
    x+=1000;
    y+=1000;
    int mixed=x*10000+y;
    for(auto v:stack){
      if(is_next(mixed, v))uni.unite(mixed, v);
    }

    stack.push_back(mixed);
  }

  map<int,int> ans;
  for(auto v:stack){
    ans[uni.root(v)]++;

    // int rv=uni.root(v);
    // int rvx=rv/10000-1000;
    // int rvy=rv%10000-1000;
    // int x=v/10000-1000;
    // int y=v%10000-1000;
    // printf("(%d,%d): %d,%d\n",x,y,rvx,rvy);
  }

  cout << ans.size() << endl;
}
