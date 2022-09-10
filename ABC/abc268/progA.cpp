#include<bits/stdc++.h>
using namespace std;

int main(){

  map<int,int> mp;
  int a;
  for(int i=0;i<5;i++){
    cin >> a;
    mp[a]++;
  }

  cout << mp.size() << endl;

}
