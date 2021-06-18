#include<bits/stdc++.h>
using namespace std;

using ll=long long;
#define max_sum 1000000000000000000

int main(){

  int n;
  cin >> n;

  ll a;
  ll sum=1;

  bool flag = 0;

  for(int i=0;i<n;i++){
    cin >> a;
    if(a==0){
      cout << 0 << endl;
      return 0;
    }
    if(flag==1 || max_sum/sum<a){
      flag=1;
    }else{
      sum*=a;
    }
  }

  if(flag==1) cout << -1 << endl;
  else cout << sum << endl;
}
