#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n,q;
  cin >> n >> q;

  vector<vector<int>> a(n);
  for(int i=0;i<n;i++){
    int t;
    cin >> t;
    for(int j=0;j<t;j++){
      int num;
      cin >> num;
      a[i].push_back(num);
    }
  }

  while(q--){
    int i,j;
    cin >> i >> j;
    i--,j--;
    cout << a[i][j] << endl;
  }
}
