#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,q;
  string s;
  cin >> n >> s >> q;

  int t,a,b;
  int revers=0;
  for(int i=0;i<q;i++){
    cin >> t >> a >> b;
    a--,b--;
    if(t==1){
      int tmp;
      if(revers){
        if(min(a,b)<n && max(a,b)>=n){
          tmp = s[min(a,b)+n];
          s[min(a,b)+n] = s[max(a,b)-n];
          s[max(a,b)-n] = tmp;
        }else if(a<n && b<n){
          tmp = s[min(a,b)+n];
          s[min(a,b)+n] = s[max(a,b)+n];
          s[max(a,b)+n] = tmp;
        }else if(a>=n && b>=n){
          tmp = s[min(a,b)-n];
          s[min(a,b)-n] = s[max(a,b)-n];
          s[max(a,b)-n] = tmp;
        }
      }else{
        tmp = s[a];
        s[a] = s[b];
        s[b] = tmp;
      }
    }else{
      revers=(revers+1)%2;
    }
    // if(revers){
    //   cout << i+1 << ":" << s.substr(n,n)+s.substr(0,n) << endl;
    // }else{
    //   cout << i+1 << ":" << s << endl;
    // }
  }

  if(revers)s = s.substr(n,n)+s.substr(0,n);

  cout << s << endl;
}

