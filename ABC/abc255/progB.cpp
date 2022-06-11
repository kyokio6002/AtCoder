#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;
  map<int,int> mp;
  vector<pair<long double,long double>> x(n);

  map<int,long double> tt;

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


  for(int i=0;i<n;i++){
    long double shortest_g=0;
    int group;
    // cout << "i:" << i << endl;
    for(auto v:mp){
      int t=v.first;
      // if(mp[t] && mp[i])continue;

      long double now=0;
      now+=pow(x[i].first-x[t].first,2);
      now+=pow(x[i].second-x[t].second,2);
      now=sqrt(now);
      // cout << "now:" << now << endl;
      if(i==t)continue;
      if(shortest_g==0){
        shortest_g=now;
        group=t;
      }else if(shortest_g>now){
        shortest_g=now;
        group=t;
      }
    }
    // cout << "group:" << group << endl;
    // cout << "shortest_g:" << shortest_g << endl;
    if(tt[group]<shortest_g)tt[group]=shortest_g;
  }

  long double aans=0;
  for(auto v:tt){
    // cout << "tt:" << v.second << endl;
    if(aans<v.second)aans=v.second;
  }

  cout << std::fixed;
  cout << std::setprecision(16) << aans << endl;

}
