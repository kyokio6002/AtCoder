#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll n,x,y;
  cin >> n >> x >> y;

  vector<ll> red(n+1);
  vector<ll> blue(n+1);
  red[n]=1;


  for(int i=n;i>=2;i--){
    // cout << i << endl;
    // cout << "b-red:  " << red[i] << endl;
    // cout << "b-blue: " << blue[i] << endl;

    red[i-1]+=red[i];
    blue[i]+=red[i]*x;

    red[i-1]+=blue[i];
    blue[i-1]+=blue[i]*y;
    blue[i]=0;
    red[i]=0;

    // cout << "a-red:  " << red[i] << endl;
    // cout << "a-blue: " << blue[i] << endl;
    // cout << endl;
  }

  // for(int i=0;i<=n;i++)cout << blue[i] << ",";
  // cout << endl;
  cout << blue[1] << endl;

}
