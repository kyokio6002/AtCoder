#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  vector<int> t(n);
  for(int i=0;i<n;i++)cin >> t[i];

  int oven1=0;
  int oven2=0;
  sort(t.rbegin(),t.rend());
  for(int i=0;i<n;i++){
    if(oven1<oven2)oven1+=t[i];
    else oven2+=t[i];
  }

  int ans=max(oven1,oven2);
  cout << ans << endl;
}
