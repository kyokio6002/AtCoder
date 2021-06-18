#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

  ll n;
  cin >> n;

  ll count=0;

  vector<pair<ll,int>> nums;
  ll now=1;


  if(n==1){
    cout << 0 << endl;
    return 0;
  }

  while(1){
    now++;
    if(now*now>n){
      if(n!=1){
        nums.emplace_back(n,1);
      }
      break;
    }


    if(n%now==0){
      count=1;
      n/=now;
      while(1){
        if(n%now!=0){
          nums.emplace_back(now,count);
          break;
        }else if(n%now==0){
          count++;
          n/=now;
        }
      }
    }

  }

  ll time=0;
  ll ans=0;
  ll fi;
  ll sec;
  for(auto& x:nums){
    cout << x.first << ":" << x.second << endl;
    fi=x.first;
    sec=x.second;
    time=0;
    while(1){
      time++;
      if(time>sec){
        break;
      }else{
        ans++;
        sec=sec-time;
        // cout << "time:" << time << endl;
        // cout << "sec:" << sec << endl;
        // cout << "ans:" << ans << endl;
      }
    }
  }

  cout << ans << endl;




}
