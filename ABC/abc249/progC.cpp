#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;
  vector<string> s(n);
  map<char,int> mp;

  for(int i=0;i<n;i++){
    cin >> s[i];
    for(int j=0;j<s[i].length();j++){
      mp[s[i][j]]++;
    }
  }


  int pat=int(pow(2,n));
  int ans=0;
  for(int i=0;i<pat;i++){
    int nowans=0;
    map<char,int> count;
    for(int j=0;j<n;j++){
      if(i&(1<<j)){
        for(int t=0;t<s[j].length();t++){
          count[s[j][t]]++;
        }
      }
    }
    for(auto v:count){
      if(v.second==k)nowans++;
    }
    ans=max(ans,nowans);
  }

  cout << ans << endl;
}
