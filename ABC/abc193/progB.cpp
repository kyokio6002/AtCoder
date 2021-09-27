#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  int n;
  cin >> n;

  ll a,p,x;
  ll ans=-1;
  for(int i=0;i<n;i++){
    cin >> a >> p >> x;
    if(x*10>a*10+5){
      if(ans!=-1)ans=min(ans,p);
      else ans=p;
    }
  }

  cout << ans << endl;

}

