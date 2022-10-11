#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  map<long long,long long> mp;
  const long long ex=1001001001001;
  long long a;
  for(int i=0;i<n;i++){
    cin >> a;
    if(mp.count(a))mp[ex]=mp.count(ex)?mp[ex]+1:1;
    else mp[a]++;
  }

  long long count=1;
  while(!mp.empty()){

    // cout << count << ":";
    // for(auto [key,value]:mp)printf("%lld(%d), ",key,value);
    // cout << endl;

    if(mp.count(count)){
      mp.erase(count);
      count++;
    }else{
      if(mp.size()<2 && (mp.begin()->second)<2)break;

      for(int i=0;i<2;i++){
        long long num=mp.rbegin()->first;
        mp[num]--;
        if(mp[num]<=0)mp.erase(num);
      }
      count++;
    }

    // for(auto [key,value]:mp)printf("%lld(%d), ",key,value);
    // cout << endl;
  }

  cout << count-1 << endl;

}
