#include<bits/stdc++.h>
using namespace std;

int main(){

  int q;
  cin >> q;
  map<int,int> mp;

  int t;
  int x,c;
  for(int i=0;i<q;i++){
    cin >> t;
    if(t==1){
      cin >> x;
      mp[x]++;
    }else if(t==2){
      cin >> x >> c;
      if(c>=mp[x]){
        mp.erase(x);
      }else{
        mp[x]-=c;
      }
    }else{

      cout << (mp.rbegin()->first)-(mp.begin()->first) << endl;
    }
  }

}
