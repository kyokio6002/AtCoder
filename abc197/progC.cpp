#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin >> a[i];

  int ans=1001001001;
  for(int i=(1<<n)-1;i>=0;i--){
    // cout << bitset<8>(i) << endl;
    int now=0;
    int XOR=0;
    for(int j=0;j<n;j++){
      if(i&(1<<j)){
        // if(now!=0)cout << endl << "now:" << now << endl;
        XOR^=now;
        now=a[j];
        // cout << a[j] << ",";
      }else{
        now|=a[j];
        // cout << a[j] << ",";
      }
    }
    // cout << endl << "now:" << now << endl;
    // cout << "XOR:" << XOR << endl << endl;
    XOR^=now;
    ans=min(ans,XOR);
  }

  cout << ans << endl;
}

