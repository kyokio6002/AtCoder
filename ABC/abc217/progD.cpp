#include<bits/stdc++.h>
using namespace std;

int main(){

  int l,q;
  cin >> l >> q;

  map<int,int> woods;
  woods[0]=0;
  woods[l]=0;

  int c,x;
  for(int i=0;i<q;i++){
    cin >> c >> x;
    if(c==1){
      woods[x]++;
    }else{
      auto itr=woods.lower_bound(x);
      auto itr_before=itr;
      itr_before--;
      cout << (itr->first-itr_before->first) << endl;
    }
  }
}
