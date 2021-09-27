#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;
  int max_a=100001;
  vector<bool> a(max_a,false);
  int t;
  for(int i=0;i<n;i++){
    cin >> t;
    a[t]=true;
  }

  // 約数判定 O(NlogN)
  vector<int> divide;
  for(int d=2;d<max_a;d++){
    for(int i=d;i<max_a;i+=d){
      if(a[i]){
        divide.push_back(d);
        break;
      }
    }
  }

  // cout << "divide:";
  // for(auto d:divide){
  //   cout << d << ",";
  // }cout << endl;
  
  // 条件判定 O(Nlogm)
  vector<bool> ans(m+1,true);
  for(auto d:divide){
    for(int i=d;i<=m;i+=d){
      ans[i]=false;
    }
  }

  int count=0;
  for(int i=1;i<=m;i++){
    if(ans[i])count++;
  }
  cout << count << endl;
  for(int i=1;i<=m;i++){
    if(ans[i])cout << i << endl;
  }


}
