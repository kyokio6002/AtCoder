#include<bits/stdc++.h>
using namespace std;

using ll=long long;
int main(){

  ll n,x;
  cin >> n >> x;
  string s;
  cin >> s;
  ll limit = ll(pow(10,18)/2);
  int d_count=0;

  int len=s.length();
  for(int i=0;i<len;i++){
    if(s[i]=='U'){
      if(d_count)d_count--;
      else x=x/2;
    }else if(s[i]=='L'){
      if(limit>x){
        x=2*x;
      }else{
        d_count++;
      }
    }else if(s[i]=='R'){
      if(limit>x){
        x=2*x+1;
      }else{
        d_count++;
      }
    }
  }

  cout << x << endl;
}
