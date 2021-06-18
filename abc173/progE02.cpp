#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
using ll = long long;

int main(){

  int n,k;
  cin >> n >> k;

  if(n==k){
    ll ans=1;
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

  if(k%2==1 && pos.size()==0){
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

  ll posnum=1;
  ll negnum=1;
  bool posErase=1;
  bool negErase=1;
  ll ans=1;
  int i=0;
  if(k%2==1){
    ans=pos.top();
    pos.pop();
    i++;
  }
  while(1){
    if(i==k){
      cout << (ans+mod)%mod << endl;
      return 0;
    }
    if(pos.size()>=2 && posErase==1){
      posnum=pos.top();
      pos.pop();
      posnum=posnum*pos.top();
      pos.pop();
      posErase=0;
    }

    if(neg.size()>=2 && negErase==1){
      negnum=neg.top();
      neg.pop();
      negnum=negnum*neg.top();
      neg.pop();
      negErase=0;
    }

    if(posnum>=negnum){
      posErase=1;
      ans=ans%mod*posnum%mod;
      posnum=0;
    }else{
      negErase=1;
      ans=ans%mod*negnum%mod;
      negnum=0;
    }
    i+=2;
  }

}
