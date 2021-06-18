#include<bits/stdc++.h>
using namespace std;

int N;//Aの個数
int M;//Anも最大値
int Q;//(a,b,c,d)の組の数
int ans = 0;

vector<int> a;
vector<int> b;
vector<int> c;
vector<int> d;


void dfs(vector<int> A){

  cout << "A:";
  for(int j=0;j<A.size();j++){
    cout << A[j];
  }
  cout << endl;

  if(A.size() == N+1){

    int now = 0;
    for(int i=0;i<Q;i++){
      if(A[b[i]] - A[a[i]] == c[i]) now+=d[i];
    }
    ans = max(ans,now);
    return;
  }

  A.push_back(A.back());
  while(A.back() <= M){
    dfs(A);
    A.back()++;
  }
}

int main(){
  cin >> N >> M >> Q;

  a.resize(Q);
  b.resize(Q);
  c.resize(Q);
  d.resize(Q);

  for(int i=0;i<Q;i++){
    cin >> a[i] >> b[i] >> c[i] >> d[i];
  }

  dfs(vector<int>(1,1));
  cout << ans << endl;
}
