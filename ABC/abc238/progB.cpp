#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a;
  cin >> n;

  vector<int> dig;
  dig.push_back(360);
  int sum=0;
  for(int i=0;i<n;i++){
    cin >> a;
    sum=(sum+a)%360;
    dig.push_back(sum);
  }

  sort(dig.begin(),dig.end());
  int ans=0;
  int prio=0;
  for(int i=0;i<dig.size();i++){
    ans=max(ans,dig[i]-prio);
    prio=dig[i];
  }

  cout << ans << endl;
}
