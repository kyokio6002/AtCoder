#include<bits/stdc++.h>
using namespace std;

#define INF 1001001001

int main(){

	int n,m;
	cin >> n >> m;
  vector<int> a(m);
  for(int i=0;i<m;i++)cin >> a[i];
  a.push_back(0);
  a.push_back(n+1);

  sort(a.begin(),a.end());
  // for(auto v:a)cout << v << ",";
  // cout << endl;

  int k=INF;
  int wid;
  for(int i=0;i<a.size()-1;i++){
    wid=a[i+1]-a[i]-1;
    // cout << "wid:" << wid << endl;
    if(wid<=0)continue;
    k=min(k,wid);
  }

  int ans=0;
  for(int i=0;i<a.size()-1;i++){
    wid=a[i+1]-a[i]-1;
    // cout << "wid:" << wid << endl;
    if(wid<=0)continue;
    ans+=wid/k;
    if(wid%k!=0)ans++;
  }

  cout << ans << endl;
  
}
