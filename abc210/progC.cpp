#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;

  vector<int> c(n);
  map<int,int> now;
  int ans=0;
  for(int i=0;i<k;i++){
    cin >> c[i];
    now[c[i]]++;
  }

  ans=now.size();
  int prio=c[0];
  int prioindex=0;
  for(int i=k;i<n;i++){
    cin >> c[i];
    now[prio]--;
    if(now[prio]==0)now.erase(prio);
    now[c[i]]++;
    ans=max(int(now.size()),ans);
    prioindex++;
    prio=c[prioindex];
  }

  cout << ans << endl;
}
