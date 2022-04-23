#include<bits/stdc++.h>
using namespace std;

int main(){

  int a,b,c,d,e,f,x;
  cin >> a >> b >> c >> d >> e >> f >> x;

  int taka_set=x/(a+c);
  int taka_w_sec=taka_set*a;
  int taka_last=x-taka_set*(a+c);
  // cout << "taka_set:" << taka_set << endl;
  // cout << "taka_w_sec:" << taka_w_sec << endl;
  // cout << "taka_last:" << taka_last << endl;
  int taka=taka_w_sec*b+min(taka_last,a)*b;
  if(taka_set==0){
    taka=min(x,a)*b;
  }

  int aoki_set=x/(d+f);
  int aoki_w_set=aoki_set*d;
  int aoki_last=x-aoki_set*(d+f);
  // cout << "aoki_set:" << aoki_set << endl;
  // cout << "aoki_w_set:" << aoki_w_set << endl;
  // cout << "aoki_last:" << aoki_last << endl;
  int aoki=aoki_w_set*e+min(aoki_last,d)*e;
  if(aoki_set==0){
    aoki=min(x,d)*e;
  }

  // cout << taka << "," << aoki << endl;

  if(aoki>taka)cout << "Aoki" << endl;
  else if(aoki==taka)cout << "Draw" << endl;
  else cout << "Takahashi" << endl;
}
