#include<bits/stdc++.h>
using namespace std;

using ll=long long;

struct binary{
  ll t;
  ll f;
};

int main(){

  int n;
  cin >> n;
  vector<binary> y(n+1);
  y[0].t=1;
  y[0].f=1;

  string s;
  for(int i=0;i<n;i++){
    cin >> s;
    if(s=="AND"){
      y[i+1].t=y[i].t;
      y[i+1].f=y[i].t+y[i].f*2;
    }else{
      y[i+1].t=y[i].t*2+y[i].f;
      y[i+1].f=y[i].f;
    }
  }

  cout << y[n].t << endl;
}

