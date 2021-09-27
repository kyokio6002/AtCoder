#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  int N,M,K;
  cin >> N >> M >> K;

  vector<int> a(N);
  vector<int> b(M);
  for(int i=0;i<N;i++) cin >> a[i];
  for(int i=0;i<M;i++) cin >> b[i];

  ll sum=0;
  for(int i=0;i<M;i++){
    sum+=b[i];
  }

  int ans=0;
  int j=M;
  for(int i=0;i<=N;i++){
    while(j>0 && sum>K){
      j--;
      sum-=b[j];
    }
    if(sum>K) break;
    ans=max(ans,i+j);
    if(i==N)break;
    sum+=a[i];
  }

  cout << ans << endl;
}
