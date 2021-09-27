#include<bits/stdc++.h>
using namespace std;

using ll = long long;

string x;
ll m;
int len=0;

bool culc(int mod){
  //cout << "mod:" << mod << endl;
  ll now_sum=m;
  ll now_degit=1;
  ll n;
  for(int i=0;i<len;i++){
    //cout << "now_sum:" << now_sum << endl;
    n=(x[i]-'0');
    for(int time=0;time<now_degit;time++){
      now_sum-=n;
    }
    now_degit*=mod;
    if(now_sum<0) return 0;
  }//cout << endl;
  return 1; 
}

int main(){

  cin >> x >> m;
  int max_num=0;
  len = x.size();
  for(int i=0;i<len;i++){
    max_num=max(max_num,(x[i]-'0'));
  }
  max_num++;
  int ans=0;
  int n=max_num;
  while(1){
    //cout << "ans:" << ans << endl;
    if(culc(n))ans++;
    else break;
    n++;
  }

  cout << ans << endl;
}
