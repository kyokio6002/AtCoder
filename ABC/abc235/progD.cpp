#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  int debag=0;
  ll a,n;
  cin >> a >> n;

  ll x=1;
  int count=0;
  int sum=0;

  ll max_n=n*10+1;
  vector<ll> dist(max_n);
  queue<pair<ll,int>> que;

  dist[x]=count;
  que.push({x,count});

  while(!que.empty()){
    pair<ll,int> p=que.front();
    x=p.first;
    count=p.second;
    que.pop();

    if(debag){
      cout << "x:" << x << endl;
      cout << "count:" << count << endl;
      sum++;
      cout << "sum:" << sum << endl;
      cout << "max_n:" << max_n << endl;
    }
    

    // 終了条件
    if(x==n){
      cout << count << endl;
      return 0;
    }

    // pat1
    if(x*a<max_n && !dist[x*a]){
      que.push({x*a,count+1});
      dist[x*a]++;
    }
    if(x*a<a || x*a<x){
      cout << "error" << endl;
      return 0;
    }
    if(debag)cout << "pat1 fin" << endl;

    // pat2
    ll len=0;
    ll xx=x;
    while(1){
      xx/=10;
      if(xx==0)break;
      len++;
    }
    if(x<10 || x%10==0)continue;
    ll nx=x/10+(x%10)*ll(pow(10,len));
    if(nx<max_n && !dist[nx]){
      que.push({nx,count+1});
      dist[nx]++;
    }
    if(debag)cout << "pat2 fin" << endl;
  }

  cout << -1 << endl;

}
