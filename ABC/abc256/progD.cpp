#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  map<int,int> mp;
  int x,y;
  for(int i=0;i<n;i++){
    cin >> x >> y;
    mp[x]++;
    mp[y]--;
  }

  int now=0;
  int start=-1;
  for(auto v:mp){
    if(start==-1)start=v.first;
    now+=v.second;
    if(!now){
      cout << start << " " << v.first << endl;
      start=-1;
    }
  }
}
