#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  map<long long,long long> mp;
  long long a;
  for(int i=0;i<n;i++){
    cin >> a;
    mp[a]++;
  }

  long long ans=0;
  long long count=1;
  long long ex=10000000000000;
  while(!mp.empty()){
    if(!mp.empty() && mp.count(count)){
      mp[count]--;
      if(mp[count]!=0)mp[count+ex]=mp[count];
      mp.erase(count);
      count++;
      ans++;
    }else{
      if(mp.size()<2 && (mp.begin()->second)<2)break;

      for(int i=0;i<2;i++){
        long long num=mp.rbegin()->first;
        mp[num]--;
        if(mp[num]==0)mp.erase(num);
      }
      count++;
      ans++;
    }

    // for(auto itr=mp.begin();itr!=mp.end();itr++){
    //   long long key=itr->first;
    //   int value=itr->second;
    //   printf("%lld(%d), ",key,value);
    // }// cout << endl;
    // for(auto [key,value]:mp)printf("%lld(%d), ",key,value);
    // cout << endl;
  }

  cout << ans << endl;

}
