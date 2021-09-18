#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  int x,y;
  cin >> x >> y;

  vector<int> a(n);
  vector<int> b(n);
  for(int i=0;i<n;i++)cin >> a[i] >> b[i];

  vector<vector<vector<int>>> dp(303,vector<vector<int>>(303,vector<int>(303)));

  int ans=1001001001;
  int flag=0;
  for(int i=0;i<n-1;i++){
    for(int xs=0;xs<303;xs++){
      for(int ys=0;ys<303;ys++){
        if(xs>=x && ys>=y && dp[i][xs][ys]>0){
          flag=1;
          ans=min(ans,dp[i][xs][ys]);
        }
        if(xs+a[i]<=300 && ys+b[i]<=300){
          dp[i+1][xs+a[i]][ys+b[i]]++;
        }
        dp[i+1][xs][ys]=dp[i][xs][ys];
      }
    }
  }

  if(flag)cout << ans << endl;
  else cout << -1 << endl;
}
