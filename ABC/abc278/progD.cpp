#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){

  int n;
  cin >> n;
  map<long long, long long> a;
  for(int i=0;i<n;i++){
    long long tmp;
    cin >> tmp;
    a[i]=tmp;
  }

  int q;
  cin >> q;
  int p,i;
  long long x;
  long long step=0;
  while(q--){
    cin >> p;
    if(p==1){
      // aの全ての要素にxを代入する
      cin >> x;
      step=x;
      a.clear();
    }else if(p==2){
      // aiにxを加える
      cin >> i >> x;i--;
      a[i]+=x;
    }else{
      // aiの値を出力する
      cin >> i;i--;
      cout << a[i]+step<< endl;
    }
    // for(int j=0;j<n;j++){
    //   cout << a[j].back() << ",\n"[j==n-1];
    // }
  }
}
