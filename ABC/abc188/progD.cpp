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
  vector<ll> line(INF);

  int test = 1000000007;
  cout << test << endl;
  
  for(int i=0;i<n;i++){
    cin >> a >> b >> c;
    line[a]+=c;
    line[b+1]-=c;
  }

  ll now_money=0;
  ll ans=0;
  for(int i=0;i<INF;i++){
    now_money+=line[i];
    if(now_money>prime)ans+=prime;
    else ans+=now_money;
  }

  cout << ans << endl;
}
