#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;
  map<int,int> mp;
  vector<pair<long double,long double>> x(n);

  map<int,long long> tt;

  int a;
  for(int i=0;i<k;i++){
    cin >> a;
    a--;
    mp[a]++;
  }

  for(int i=0;i<n;i++){
    long double a,b;
    cin >> a >> b;
    x[i]={a,b};
  }


  long long aans=0;
  for(int i=0;i<n;i++){
    long long shortest_g=-1;
    for(auto v:mp){
      int t=v.first;

      long long now=0;
      now+=(x[i].first-x[t].first)*(x[i].first-x[t].first);
      now+=(x[i].second-x[t].second)*(x[i].second-x[t].second);
      // cout << "now:" << now << endl;
      if(shortest_g==-1){
        shortest_g=now;
        group=t;
      }else if(shortest_g>now){
        shortest_g=now;
        group=t;
      }
      // shortest_g=min(shortest_g,now);
    }
    aans=max(shortest_g,aans);
  }

  cout << std::fixed;
  cout << std::setprecision(16) << sqrt(aans) << endl;

}
