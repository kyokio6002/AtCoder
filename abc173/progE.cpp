#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
using ll = long long;

int main(){

  int n,k;
  cin >> n >> k;

  if(n==k){
    ll ans = 1;
    ll num;
    for(int i=0;i<n;i++){
      cin >> num;
      ans=ans*num%mod;
    }
    cout << (ans+mod)%mod;
    return 0;
  }

  priority_queue<ll> pos;
  priority_queue<ll> neg;
  ll num;
  for(int i=0;i<n;i++){
    cin >> num;
    if(num>=0){
      pos.push(num);
    }else{
      neg.push(-num);
    }
  }


  if(k%2==1 && pos.empty()){
    ll ans=1;
    ll num;
    for(int i=0;i<n;i++){
      num=-neg.top();
      neg.pop();
      if(i>=n-k){
        num=num%mod;
        ans=ans*num%mod;
      }
    }
    cout << (ans+mod)%mod << endl;
    return 0;
  }


  ll ans=1;
  ll posnum=1;
  ll negnum=1;
  ll count=0;
  priority_queue<ll> que;
  if(k%2==1){
    ans=pos.top()%mod;
    pos.pop();
    count++;
  }

  while(pos.size()>=2){
    posnum=pos.top();
    pos.pop();
    posnum=posnum*pos.top();
    pos.pop();
    que.push(posnum);
  }

  while(neg.size()>=2){
    negnum=neg.top();
    neg.pop();
    negnum=negnum*neg.top();
    neg.pop();
    que.push(negnum);
  }

  ll s;
  while(1){
    if(count==k){
      cout << (ans+mod)%mod << endl;
      return 0;
    }
    s=que.top()%mod;
    que.pop();
    ans=ans*s%mod;
    count+=2;
  }

}
