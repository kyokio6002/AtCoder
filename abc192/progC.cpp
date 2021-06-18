#include<bits/stdc++.h>
using namespace std;

int f(int x){
  vector<int> a;
  int b;
  while(1){
    b = x%10;
    x /= 10;
    a.push_back(b);
    if(x<=0)break;
  }
  vector<int> big = a;
  sort(big.rbegin(),big.rend());
  vector<int> small = a;
  sort(small.begin(),small.end());

  int ans=0;
  int addnum;
  for(int i=0;i<big.size();i++){
    addnum=big[i]-small[i];
    ans*=10;
    ans+=addnum;
  }
  return ans;
}

int main(){

  int n,k;
  cin >> n >> k;
  int ans=n;
  for(int i=0;i<k;i++){
    ans=f(ans);
  }
  cout << ans << endl;
}
