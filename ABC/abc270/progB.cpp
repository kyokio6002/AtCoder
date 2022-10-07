#include<bits/stdc++.h>
using namespace std;

int main(){

  int wall,hammer,goal;
  cin >> goal >> wall >> hammer;

  int ans=0;

  if(goal<0){
    goal*=-1;
    wall*=-1;
    hammer*=-1;
  }

  // goalできない場合
  if(goal>wall && hammer>wall && wall>0){
    cout << -1 << endl;
    return 0;
  }

  // goalと逆方向へ戻ってwallを壊す
  if(goal>wall && wall>0 && hammer<0){
    ans+=abs(hammer)*2+goal;
  }else{
    ans=goal;
  }
  
  cout << ans << endl;
}
