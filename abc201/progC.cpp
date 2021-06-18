#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  
  ll ans=0;
  vector<int> num(10);
  char c;
  for(int i=0;i<10;i++){
    cin >> c;
    if(c=='o') num[i]=1;
    else if(c=='x') num[i]=-1;
    else num[i]=0;
  }

  int now;
  vector<int> n(4);
  for(int i=20000;i>10000;i--){
    now=i;
    int flag=1;
    n[0]=now%10;
    n[1]=(now/10)%10;
    n[2]=(now/100)%10;
    n[3]=(now/1000)%10;
    // 絶対入ってる数字チェック
    for(int i=0;i<10;i++){
      if(num[i]==1){
        if(n[0]!=i && n[1]!=i && n[2]!=i && n[3]!=i){
          flag=0;
        }
      }
    }
    for(int j=0;j<4;j++){
      if(num[n[j]]==-1){
        flag=0;
      }
    }
    if(flag)ans++;
  }
  cout << ans << endl;
}
