#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,w;
  cin >> n >> w;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin >> a[i];

  map<int,int> mp;

  if(n==1){
    if(a[0]<=w)cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
  }else if(n==2){
    if(a[0]<=w)mp[a[0]]++;
    if(a[1]<=w)mp[a[1]]++;
    if(a[0]+a[1]<=w)mp[a[0]+a[1]]++;
    cout << mp.size() << endl;
    return 0;
  }

  vector<int> ans(w+1);
  for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
      for(int k=j+1;k<n;k++){
        vector<int> pat;
        pat.push_back(a[i]);
        pat.push_back(a[j]);
        pat.push_back(a[k]);
        pat.push_back(a[i]+a[j]);
        pat.push_back(a[i]+a[k]);
        pat.push_back(a[j]+a[k]);
        pat.push_back(a[i]+a[j]+a[k]);
        for(int t=0;t<pat.size();t++){
          if(pat[t]<=w)ans[pat[t]]++;
        }
      }
    }
  }
  int count=0;
  for(int i=0;i<=w;i++){
    if(ans[i])count++;
  }
  cout << count << endl;
}
