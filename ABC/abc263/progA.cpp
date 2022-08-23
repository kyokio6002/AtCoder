#include<bits/stdc++.h>
using namespace std;

int main(){

  map<int,int> mp;
  int n;
  for(int i=0;i<5;i++){
    cin >> n;
    mp[n]++;
  }

  if(mp.size()==2){
    if(mp.begin()->second==2 || mp.begin()->second==3){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}
