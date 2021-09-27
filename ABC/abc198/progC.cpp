#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  ll r,x,y;
  cin >> r >> x >> y;

  ll len = x*x+y*y;

  if(len==r*r){
    cout << 1 << endl;
    return 0;
  }else if(len<=4*r){
    cout << 2 << endl;
    return 0;
  }

  ll n=0;
  ll now=0;
  while(1){
     if(now==len){
       cout << n << endl;
       return 0;
     }else if(len<=r*r*(2+n)*(n+2)){
       cout << n+2 << endl;
       return 0;
     }
     n++;
     now = (n*r)*(n*r);
  }
}
