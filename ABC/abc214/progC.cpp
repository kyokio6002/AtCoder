#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  int n;
  cin >> n;
  vector<ll> s(n);
  vector<ll> t(n);

  for(int i=0;i<n;i++)cin >> s[i];
  for(int i=0;i<n;i++)cin >> t[i];

  vector<ll> ans(n);
  for(int i=0;i<n;i++)ans[i]=t[i];

  ll time=t[0];
  int flag=1;
  int ii;
  for(int i=0;i<n*2;i++){
    ii=i%n;
    if(ii==0 && flag){
      flag=0;
      time=t[0];
      continue;
    }

    time+=s[(ii-1+n)%n];
    if(time>ans[ii])time=ans[ii];
    ans[ii]=time;
  }

  for(int i=0;i< n;i++)cout << ans[i] << endl;

}

