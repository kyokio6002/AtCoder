#include<bits/stdc++.h>
using namespace std;

using P=pair<int,int>;
using ll=long long;

struct L{
  int a,b,c;
  L(int a=0,int b=0,int c=0): a(a),b(b),c(c){}
};

const int dx[] = {-1,0,1,0};
const int dy[] = {0,-1,0,1};

int main(){

  int n,m;//縦横線の数
  cin >> n >>m;

  map<int,int> mpX,mpY;
  mpX[0]=0;
  mpY[0]=0;

  vector<L> lh,lv;//線分の情報
  for(int i=0;i<n;i++){
    int a,b,c;
    cin >> a >> b >> c;
    mpX[a]=0;
    mpX[b]=0;
    mpY[c]=0;
    lh.emplace_back(a,b,c);
  }
  for(int i=0;i<m;i++){
    int a,b,c;
    cin >> c >> a >> b;
    mpY[a]=0;
    mpY[b]=0;
    mpX[c]=0;
    lv.emplace_back(a,b,c);
  }

  //圧縮座用配列を作る
  vector<int> xs,ys;
  //mapがキーでsortされてるから、x、yがそれぞれ小さい順に抜き出されて入れられる
  //mpX,mpYのsecondは０で使用してないからxsのindexを入れて紐づけてる
  //→xs[i]=mpXのsecondがiになるとこのfirst
  for(auto& p:mpX){
    p.second=xs.size();
    xs.push_back(p.first);
  }
  for(auto& p:mpY){
    p.second=ys.size();
    ys.push_back(p.first);
  }

  int h = xs.size()*2;//xの個数とそれと同等の線のマスがあれば十分
  int w = ys.size()*2;

  vector<vector<int>> dist(h,vector<int>(w));
  //2の倍数が線のマス、a,b,cはさっき入れたインデックス
  //→index=座標圧縮されたグリットのx,y座標
  for(int i=0;i<n;i++){
    int a = mpX[lh[i].a]*2;
    int b = mpX[lh[i].b]*2;
    int c = mpY[lh[i].c]*2;
    for(int x=a;x<=b;x++) dist[x][c]=-1;//壁を塗ってる
  }
  for(int i=0;i<m;i++){
    int a = mpY[lv[i].a]*2;
    int b = mpY[lv[i].b]*2;
    int c = mpX[lv[i].c]*2;
    for(int y=a;y<=b;y++) dist[c][y]=-1;
  }



  //dfsして塗りつぶす
  queue<P> que;
  int sx=mpX[0]*2,sy=mpY[0]*2;//原点は線上だから*2,ここで使うから最初にmp[０]が必要
  dist[sx][sy]=1;
  que.push({sx,sy});
  while(!que.empty()){
    int x,y;
    x = que.front().first;
    y = que.front().second;
    que.pop();

    for(int i=0;i<4;i++){
      int nx = x+dx[i];
      int ny = y+dy[i];

      if(nx<0 || nx>=h || ny<0 || ny>=w) continue;
      if(dist[nx][ny]!=0) continue;
      dist[nx][ny]=1;
      que.push({nx,ny});
    }
  }

  ll ans = 0;
  //0,1,-1に塗り分けられてて、それぞれ行けないとこ、行けるとこ、線分が引いてあるとこ
  for(int y=0;y<w;y++){
    for(int x=0;x<h;x++){
      if(dist[x][y]!=1) continue;
      //外枠がにdist[]=1が存在する
      //→閉路がない→INF
      if(x==0 || x==h-1 || y==0 || y==w-1){
        cout << "INF" << endl;
        return 0;//終了
      }
      if(x%2 == 0 || y%2 == 0) continue;
      ll ex = xs[x/2+1]-xs[x/2];
      ll ey = ys[y/2+1]-ys[y/2];
      ans+=ex*ey;
    }
  }
  cout << ans << endl;


}
