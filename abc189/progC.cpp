#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin >> a[i];

  int ans=0;
  for(int l=0;l<n;l++){
    int mina=1001001007;
    for(int r=l;r<n;r++){
      mina=min(mina,a[r]);
      ans=max(ans,mina*(r-l+1));
    }
  }

  cout << ans << endl;
}
