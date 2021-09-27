#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

struct L {
  int a, b, c;
  L(int a=0, int b=0, int c=0): a(a), b(b), c(c) {}//コンストラクト
};

const int dx[] = {-1,0,1,0};
const int dy[] = {0,-1,0,1};

int main() {
  int n, m;
  cin >> n >> m;
  map<int,int> mpX, mpY;
  mpX[0] = 0;
  mpY[0] = 0;

  vector<L> lh, lv;//辺情報
  rep(i,n) {
    int a, b, c;
    cin >> a >> b >> c;
    mpX[a] = 0;
    mpX[b] = 0;
    mpY[c] = 0;
    lh.emplace_back(a,b,c);
  }
  rep(i,m) {
    int a, b, c;
    cin >> c >> a >> b;
    mpY[a] = 0;
    mpY[b] = 0;
    mpX[c] = 0;
    lv.emplace_back(a,b,c);
  }

  vector<int> xs, ys;//元の座標を求める
  for (auto& p : mpX) {
    p.second = xs.size();//mpXにindexを持たせる
    xs.push_back(p.first);
  }
  for (auto& p : mpY) {
    p.second = ys.size();
    ys.push_back(p.first);
  }

  int h = xs.size()*2;
  int w = ys.size()*2;

  vector<vector<int>> d(h, vector<int>(w));
  rep(i,n) {
    int a = mpX[lh[i].a]*2;
    int b = mpX[lh[i].b]*2;
    int c = mpY[lh[i].c]*2;
    for (int x = a; x <= b; ++x) d[x][c] = -1;
  }
  rep(i,m) {
    int a = mpY[lv[i].a]*2;
    int b = mpY[lv[i].b]*2;
    int c = mpX[lv[i].c]*2;
    for (int y = a; y <= b; ++y) d[c][y] = -1;
  }

  queue<P> q;
  int sx = mpX[0]*2, sy = mpY[0]*2;
  d[sx][sy] = 1;
  q.emplace(sx,sy);
  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    rep(v,4) {
      int nx = x+dx[v], ny = y+dy[v];
      if (nx < 0 || nx >= h) continue;
      if (ny < 0 || ny >= w) continue;
      if (d[nx][ny] != 0) continue;
      d[nx][ny] = 1;
      q.emplace(nx,ny);
    }
  }

  ll ans = 0;
  rep(x,h)rep(y,w) {
    if (d[x][y] != 1) continue;
    if (x == 0 || x == h-1 || y == 0 || y == w-1) {
      cout << "INF" << endl;
      return 0;
    }
    if (x%2 == 0 || y%2 == 0) continue;
    ll ex = xs[x/2+1]-xs[x/2];
    ll ey = ys[y/2+1]-ys[y/2];
    ans += ex*ey;
  }
  cout << ans << endl;
  return 0;
}
