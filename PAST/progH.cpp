#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using P = pair<int,int>;

#define INF 1001001001

int main(){

    int N,L;
    cin >> N >> L;
    map<int,bool> mp;
    int now;
    for(int i=0;i<N;i++){
      cin >> now;
      mp[now]=1;
    }
    int t1,t2,t3;
    cin >> t1 >> t2 >> t3;

    P patern1 = {1,t1};
    P patern2 = {2,t1+t2};
    P patern3 = {4,t1+3*t2};

    int wallExist=0;

    vector<ll> dp(L+1,INF);
    dp[0]=0;

    for(int i=0;i<L;i++){

      if(mp[i]==1) wallExist=t3;
      else wallExist=0;

      //patern1
      dp[i+patern1.first]=min(dp[i+patern1.first],dp[i]+patern1.second+wallExist);

      //petern2
      if(i+patern2.first>L){
        dp[L]=min(dp[L],dp[i]+(t1/2)+(t2/2)+wallExist);
      }else{
        dp[i+patern2.first]=min(dp[i+patern2.first],dp[i]+patern2.second+wallExist);
      }

      //petern3
      if(i+patern3.first>L){
        if(i+1==L){
          dp[L]=min(dp[L],dp[i]+(t1/2)+(t2/2)+wallExist);
        }else if(i+2==L){
          dp[L]=min(dp[L],dp[i]+(t1/2)+3*(t2/2)+wallExist);
        }else if(i+3==L){
          dp[L]=min(dp[L],dp[i]+(t1/2)+5*(t2/2)+wallExist);
        }
      }else{
        dp[i+patern3.first]=min(dp[i+patern3.first],dp[i]+patern3.second+wallExist);
      }
    }

    cout << dp[L] << endl;
}
