#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> p(n,-1);
  // 人1から人n-1
  for(int i=1;i<n;i++){
    cin >> p[i];
    p[i]--;
  }

  int now=n-1;
  int ans=0;
  while(now!=-1){
    now=p[now];
    ans++;
  }

  cout << ans-1 << endl;
}
