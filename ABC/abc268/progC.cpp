#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  map<int,int> mp;
  int r;
  for(int i=0;i<n;i++){
    cin >> r;
    mp[(r-i+n)%n]++;
    mp[(r-(i-1)+n)%n]++;
    mp[(r-(i+1)+n)%n]++;
  }

  int ans=0;
  for(int i=0;i<n;i++)ans=max(ans,mp[i]);

  cout << ans << endl;

}
