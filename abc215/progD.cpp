#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){

  int n,m;
  cin >> n >> m;
  
  vector<int> a(n);
  map<int,int> mp;
  for(int i=0;i<n;i++){
    cin >> a[i];
    mp[a[i]]++;
  }

  vector<int> ans;
  int flag;
  map<int,int> nmp;
  for(int k=1;k<=m;k++){
    flag=1;
    nmp=mp;
    for(int i=0;i<n;i++){
      if(gcd(a[i],k)!=1){
        flag=0;
        break;
      }else{
        nmp.erase(k);
      }
    }
    if(flag)ans.push_back(k);
  }

  cout << ans.size() << endl;
  for(int i=0;i<ans.size();i++){
    cout << ans[i] << endl;
  }
}
