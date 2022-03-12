#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  map<int,int> a;
  map<int,int> b;

  int t;
  for(int i=0;i<n;i++){
    cin >> t;
    a[t]=i+1;
  }
  for(int i=0;i<n;i++){
    cin >> t;
    b[t]=i+1;
  }

  int i;
  int ans1=0;
  int ans2=0;
  for(auto v:a){
    i=v.second;
    if(b[v.first]==0)continue;
    else if(b[v.first]==v.second)ans1++;
    else ans2++;
  }

  cout << ans1 << endl;
  cout << ans2 << endl;
}
