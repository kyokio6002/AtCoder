#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

vector<vector<char>> mp;
vector<vector<int>> dp;
int W,H;
int ans;

int main(){

  cin >> H >> W;

  mp=vector<vector<char>>(W,vector<char>(H));
  dp=vector<vector<int>>(W,vector<int>(H,0));
  for(int y=0;y<H;y++){
    for(int x=0;x<W;x++){
      cin >> mp[x][y];
    }
  }

  dp[0][0]=1;
  for(int y=0;y<H;y++){
    for(int x=0;x<W;x++){
      if(x+1<W && mp[x+1][y]=='.'){
        dp[x+1][y]=(dp[x+1][y]+dp[x][y])%mod;
      }
      if(y+1<H && mp[x][y+1]=='.'){
        dp[x][y+1]=(dp[x][y+1]+dp[x][y])%mod;
      }
    }
  }

  cout << (mod+dp[W-1][H-1])%mod << endl;
}
