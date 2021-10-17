#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  double sum_t=0;
  for(int i=0;i<n;i++){
    cin >> a[i] >> b[i];
    sum_t+=double(a[i])/b[i];
  }

  sum_t/=2;
  double ans=0;
  for(int i=0;i<n;i++){
    if(sum_t<double(a[i])/b[i]){
      ans+=sum_t*b[i];
      break;
    }else{
      sum_t-=double(a[i])/b[i];
      ans+=a[i];
    }
  }

  cout << ans << endl;

}
