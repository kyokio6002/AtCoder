#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;

  map<int,pair<int,int>> mp;
  int a,b;
  for(int i=0;i<n;i++){
    cin >> a;
    mp[a].first++;
  }
  for(int i=0;i<m;i++){
    cin >> b;
    mp[b].second++;
  }

  int ba=-1,bb=-1;
  int num;
  int ans=1001001001;
  for(auto v:mp){
    num=v.first;
    int a=-1,b=-1;
    if(v.second.first>0)a=num;
    if(v.second.second>0)b=num;

    if(a!=-1 && b!=-1){
      ans=min(ans,abs(a-b));
      if(ba!=-1)ans=min(ans,abs(ba-b));
      if(bb!=-1)ans=min(ans,abs(a-bb));
    }else if(a!=-1){
      if(bb!=-1)ans=min(ans,abs(a-bb));
    }else if(b!=-1){
      if(ba!=-1)ans=min(ans,abs(ba-b));
    }

    if(a!=-1)ba=a;
    if(b!=-1)bb=b;
  }

  cout << ans << endl;

}
