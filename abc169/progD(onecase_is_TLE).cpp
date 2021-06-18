#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  ll num;
  cin >> num;
  ll numCP=num;
  ll count=1;

  map<ll,ll> mp;
  vector<pair<ll,ll>> nums;
  ll time;

  if(num==1){
    cout << 0 << endl;
    return 0;
  }else{
    while(1){
      count++;
      time=0;
      if(count*count>numCP && nums.size()==0){
        nums.emplace_back(numCP,1);
        break;
      }
      if(num%count==0){
        time++;
        num/=count;
        while(1){
          if(num%count!=0){
            nums.emplace_back(count,time);
            break;
          }else if(num%count==0){
            time++;
            num/=count;
          }
        }
      }
      if(num==1){
        break;
      }
    }

    for(auto& i:nums){
      cout << i.first << ":" << i.second << endl;
      ll t=1;
      ll now=i.first;
      mp[i.first]++;
      i.second--;
      while(1){
        t++;
        if(i.second<t){
          break;
        }else{
          now*=i.first;
          mp[now]++;
          i.second-=t;
        }
      }
    }

    for(auto& v:mp){
      cout << v.first << ":" << v.second << endl;
    }
    cout <<  endl << mp.size() << endl;
  }


}
