#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  int N=1;
  for(int i=0;i<n;i++)N*=2;
  int ans;

  vector<int> a(N),b(N);
  for(int i=0;i<N;i++){
    cin >> a[i];
    b[i]=a[i];
  }

  int len=N;
  for(int i=0;i<n-1;i++){
    for(int j=0;j<len;j++){
      if(j%2==1){
        a[j/2]=max(a[j],a[j-1]);

      }
    }
    len/=2;
  }

  ans=min(a[0],a[1]);
  for(int i=0;i<N;i++){
    if(b[i]==ans){
      ans=i+1;
      break;
    }
  }
  cout << ans << endl;
}
