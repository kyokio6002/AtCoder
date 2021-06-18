#include<bits/stdc++.h>
using namespace std;

#define INF 1000000007
using ll=long long;

int main(){

  int n;
  cin >> n;
  ll prime;
  cin >> prime;
  ll a,b,c;
  map<ll,ll> line;

  for(int i=0;i<n;i++){
    cin >> a >> b >> c;
    line[a]+=c;
    line[b+1]-=c;
  }

  ll now_money=0;
  ll ans=0;
  ll pos;
  ll cost;
  ll prio=-1;
  ll select;
  for(auto c:line){
    pos=c.first;
    cost=c.second;
    now_money+=cost;
    if(prio!=-1){
      ans+=select*(pos-prio);
    }
    prio=pos;
    if(now_money>prime)select=prime;
    else select=now_money;
  }
  cout << ans << endl;
}

