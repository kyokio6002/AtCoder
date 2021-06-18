#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  int ans=0;
  vector<int> nmax(100005);
  vector<int> dp(100005);
  int a;
  for(int i=0;i<n;i++){
    cin >> a;
    for(int j=1;j<=100000;j++){
      if(j<=a){
        dp[j]++;
        nmax[j]=max(dp[j],nmax[j]);
        ans=max(ans,j*nmax[j]);
      }else{
        dp[j]=0;
      }
    }
  }

  cout << ans << endl;
}
