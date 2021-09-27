#include<bits/stdc++.h>
using namespace std;

int popcnt(int x){
  return __builtin_popcount(x);
}

int f(int x){
  if(x==0) return 0;
  else return f(x%popcnt(x))+1;
}

int main(){

  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> x(n);
  int pc=0;
  for(int i=0;i<n;i++){
    x[i]=s[i]-'0';
    pc+=x[i];
  }

  vector<int> ans(n);
  for(int b=0;b<2;b++){
    int npc=pc;
    if(b==0) npc++;
    else npc--;

    if(npc<=0) continue;

    int r0=0;
    for(int i=0;i<n;i++){
      r0=(r0*2)%npc;
      r0+=x[i];
    }

    int k=1;
    for(int i=n-1;i>=0;i--){
      if(x[i]==b){
        int r=r0;
        if(b==0) r=(r+k)%npc;
        else r=(r-k+npc)%npc;
        ans[i]=f(r)+1;
      }
      k=(k*2)%npc;
    }
  }

  for(int i=0;i<n;i++){
    cout << ans[i] << endl;
  }

}
