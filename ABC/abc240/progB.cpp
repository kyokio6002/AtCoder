#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  map<int,int> mp;
  int t;
  for(int i=0;i<n;i++){
    cin >> t;
    mp[t]++;
  }

  cout << mp.size() << endl;
  
}
