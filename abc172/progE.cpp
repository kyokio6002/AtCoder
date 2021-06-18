#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define mod 1000000007
int main(){

  int N,M;
  cin >> N >> M;

  ll sum = 1;
  for(int i=0;i<N;i++){
    sum*=(M-i)%mod*(M-1-i)%mod;
  }

  cout << sum << endl;
}
