#include<bits/stdc++.h>
using namespace std;

int main(){

  int p;
  cin >> p;

  int big=1;
  int ans=0;
  int d=0;
  while(1){
    d++;
    big*=d;
    if(big>p){
      big/=d;
      d--;
      break;
    }
  }


  int now=big;
  int q=p;
  while(1){
    int num=q/now;
    if(num>100){
      q-=now*100;
      ans+=100;
    }else{
      q-=now*num;
      ans+=num;
    }
    now/=d;
    d--;
    if(q==0)break;
  }

  cout << ans << endl;
}
