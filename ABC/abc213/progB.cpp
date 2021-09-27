#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cin >> n;

  vector<pair<int,int>> a(n);
  for(int i=0;i<n;i++){
    cin >> a[i].first;
    a[i].second=i;
  }

  sort(a.rbegin(),a.rend());

  // for(int i=0;i<n;i++){
  //   cout << a[i].first << ":" << a[i].second << endl;
  // }

  cout << a[1].second+1 << endl;
    
}
