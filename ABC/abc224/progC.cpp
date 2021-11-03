#include<bits/stdc++.h>
using namespace std;

using ll=long long;

struct pos{
  ll x;
  ll y;
};

int main(){

  int n;
  cin >> n;
  int ans=0;
  vector<pos> p(n);
  for(int i=0;i<n;i++){
    cin >> p[i].x >> p[i].y;
  }

  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        ll div1=(p[k].y-p[i].y)*(p[j].x-p[i].x);
        ll div2=(p[k].x-p[i].x)*(p[j].y-p[i].y);
        if(p[i].x==p[j].x && p[j].x==p[k].x)continue;
        else if(p[i].y==p[j].y && p[j].y==p[k].y)continue;
        else if(div1==div2)continue;
        ans++;
      }
    }
  }

  cout << ans << endl;
}
