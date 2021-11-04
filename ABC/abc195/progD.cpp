#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m,q;
  cin >> n >> m >> q;

  vector<pair<int,int>> b(n);
  for(int i=0;i<n;i++)cin >> b[i].second >> b[i].first;
  sort(b.rbegin(),b.rend());
  vector<pair<int,int>> x(m);
  for(int i=0;i<m;i++){
    cin >> x[i].first;
    x[i].second=i;
  }
  sort(x.begin(),x.end());

  // for(int i=0;i<n;i++)printf("(%d,%d),",b[i].first,b[i].second);
  // cout << endl;
  // for(int i=0;i<m;i++)printf("%d,",x[i]);
  // cout << endl;

  int l,r;
  for(int _=0;_<q;_++){
    cin >> l >> r;
    l--,r--;
    vector<int> now(m);
    for(int i=l;i<=r;i++)now[i]=1;
    int ans=0;
    // 荷物ループ
    for(int i=0;i<n;i++){
      // 箱ループ
      for(int j=0;j<m;j++){
        if(now[x[j].second]==1)continue;
        if(x[j].first>=b[i].second){
          ans+=b[i].first;
          now[x[j].second]=1;
          break;
        }
      }
      // for(int t=0;t<m;t++)cout << now[t] << ",";
      // cout << endl;
    }
    cout << ans << endl;
  }
}
