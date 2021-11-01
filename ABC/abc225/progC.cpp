#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;

  int flag=1;
  int base,num;
  int next_v=0;
  for(int i=0;i<n;i++){
    cin >> base;
    // printf("%d(%d,%d),,",base-next_v,base,next_v);
    if(i>0 && base-next_v!=7){
      flag=0;
      next_v=base;
    }else next_v=base;
    for(int j=1;j<m;j++){
      cin >> num;
      if(num-base!=1)flag=0;
      // else cout << num-base << ",";
      base=num;
    }
    // cout << endl;
  }

  if(flag)cout << "Yes" << endl;
  else cout << "No" << endl;
}
