#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  
  ll n,q;
  cin >> n >> q;
  map<ll,int> mp;
  ll a;
  ll maxa=0;
  for(int i=0;i<n;i++){
    cin >> a;
    if(maxa<a)maxa=a;
    mp[a]=i+1;
  }

  ll k;
  for(int i=0;i<q;i++){
    cin >> k;
    if(k>maxa){
      cout << k+mp[maxa] << endl;
      continue;
    }
    int bias=0;
    int j=1;
    while(1){
      j--;
      if(mp[k+j]!=0){
        bias=mp[k+j];
        break;
      }else if(k+j<0){
        bias=0;
        break;
      }
    }
    int t=-1;
    while(1){
      t++;
      if(mp[k+t]==0){
        bias--;
        if(bias<1){
          cout << k+t << endl;
          break;
        }
      }
    }
  }

}
