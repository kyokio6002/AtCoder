#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  int aa,bb;
  int ans=10000000;
  int min_a=10000000;
  int min_b=10000000;
  vector<int> a(n),b(n);

  for(int i=0;i<n;i++)cin >> a[i] >> b[i];
  int two=10000000;
  for(int i=0;i<n;i++){
    aa=a[i];
    for(int j=0;j<n;j++){
      bb=b[j];
      if(i==j){
        ans=min(aa+bb,ans);
      }else{
        ans=min(ans,max(aa,bb));
      }
    }
  }

  cout << ans << endl;
}
