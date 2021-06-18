#include<bits/stdc++.h>
using namespace std;

#define INF 2000000000

int main(){

  int n,k;
  cin >> n >> k;

  vector<int> h(n);
  vector<int> dp(n,INF);
  dp[0]=0;

  for(int i=0;i<n;i++){
    cin >> h[i];
  }

  for(int i=0;i<n;i++){
    if(i==n-1){
      cout << dp[n-1] << endl;
    }else{
      //i→i+j
      for(int j=1;j<=k;j++){
        if(i+j>n-1){
          break;
        }else{
          dp[i+j]=min(dp[i+j],dp[i]+abs(h[i]-h[i+j]));
        }
      }
    }
  }
}
