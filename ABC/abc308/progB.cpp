#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(){

  int n,m;
  cin >> n >> m;

  vector<string> c(n);
  for(int i=0;i<n;i++)cin >> c[i];

  vector<string> d(m);
  for(int i=0;i<m;i++){
    cin >> d[i];
  }

  int def;
  cin >> def;
  map<string,int> mp;
  for(int i=0;i<m;i++){
    int t;
    cin >> t;
    mp[d[i]]=t;
  }

  int ans=0;
  for(int i=0;i<n;i++){
    if(mp.count(c[i])){
      ans+=mp[c[i]];
    }else{
      ans+=def;
    }
  }

  cout << ans << endl;


}
