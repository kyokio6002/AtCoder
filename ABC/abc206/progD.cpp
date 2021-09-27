#include<bits/stdc++.h>
using namespace std;

struct UnionFind{

  vector<int> par;  // par[i]:iの親の番号 ex)par[3]=2→"3の親が2"
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


int main(){

  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin >> a[i];

  UnionFind uni(200005);
  // cout << "1,2,3,4,5" << endl;
  // for(int i=1;i<6;i++){
  //   cout << uni.par[i] << ",";
  // }cout << endl;
  for(int i=0;i<n/2;i++){
    uni.unite(a[i],a[n-i-1]);
    // for(int j=1;j<6;j++){
    //   cout << uni.par[j] << ",";
    // }cout << endl;
  }

  int ans=0;
  for(int i=1;i<200005;i++){
    if(uni.root(i)!=i)continue;
    ans+=uni.size(i)-1;
  }

  cout << ans << endl;
}
