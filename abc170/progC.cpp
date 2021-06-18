#include<bits/stdc++.h>
using namespace std;

int main(){

  int x,n;
  cin >> x >> n;
  map<int,bool> mp;
  int a;
  for(int i=0;i<n;i++){
    cin >> a;
    mp[a]=1;
  }

  int distance=-1;
  while(1){
    distance++;
    if(mp[x-distance]==0){
      cout << x-distance << endl;
      return 0;
    }else if(mp[x+distance]==0){
      cout << x+distance << endl;
      return 0;
    }
  }
}
