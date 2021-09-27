#include<bits/stdc++.h>
using namespace std;

int main(){

  int N;
  cin >> N;
  map<int,int> mp;
  int num;
  int MAX_NUM=0;
  for(int i=0;i<N;i++){
    cin >> num;
    MAX_NUM=max(MAX_NUM,num);
    mp[num]++;
  }

  if(mp.size()==1){
    if(N==1){
      cout << 1 << endl;
    }else{
      cout << 0 << endl;
    }
    return 0;
  }

  int ans = 0;
  int now;
  while(1){
    now=mp.begin()->first;

    for(int i=2;i<1000000;i++){
      mp.erase(now*i);
      if(now*i>=MAX_NUM) break;
    }

    if(mp[now]==1){
      ans++;
    }
    mp.erase(now);
    if(mp.size()==0){
      cout << ans << endl;
      return 0;
    }
  }
}
