#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;

  map<string,pair<int,int>> mp;
  string s;
  int t;
  for(int i=0;i<n;i++){
    cin >> s >> t;
    if(!mp.count(s))mp[s]={t,i};
  }

  int ans=-1;
  int ans_index=100001;
  string str;
  int count;
  int index;
  for(auto v:mp){
    str=v.first;
    count=v.second.first;
    index=v.second.second;
    if(ans==count){
      if(ans_index>index)ans_index=index;
    }else if(ans<count){
      ans=count;
      ans_index=index;
    }
  }

  cout << ans_index+1 << endl;
}
