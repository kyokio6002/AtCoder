#include<bits/stdc++.h>
using namespace std;

using ll=long long;

ll pow_num(ll n,ll m){
  ll r=1;
  while(m){
    r=r*((m%2)?n:1),n=n*n,m>>=1;
  }
  return r;
}

int main(){

  ll N;
  cin >> N;

  if(N<=26){
    char instaAns = N+96;
    cout << instaAns << endl;
    return 0;
  }

  vector<ll> dp(100);
  dp[0]=26;
  int patern;
  for(int i=0;i<100;i++){
    dp[i+1]=dp[i]+pow_num(26,i+2);
    if(dp[i+1]>=N){
      patern=i+1;
      break;
    }
  }

  ll index_one = N-dp[patern-1]-1;//1から
  int order = patern+1;

  vector<int> ans(order);
  int bit = patern;
  for(int i=0;i<order;i++){
    ans[i]=index_one/pow_num(26,bit);
    index_one=index_one-ans[i]*pow_num(26,bit);
    ans[i]+=97;
    bit--;
  }

  string s="";
  char c;
  for(int i=0;i<order;i++){
    c=ans[i];
    s+=c;
  }

  cout << s << endl;

}
