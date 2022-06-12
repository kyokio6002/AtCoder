#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n,m;
  cin >> n >> m;

  vector<pair<int,int>> a(n);
  vector<int> b(m);
  for(int t,i=0;i<n;i++){
    cin >> t;
    a[i]={t,1};
  }
  for(int i=0;i<m;i++)cin >> b[i];

  int ans=m;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(b[i]==a[j].first && a[j].second>0){
        ans--;
        a[j].second--;
        break;
      }
    }
  }

  if(!ans)cout << "Yes" << endl;
  else cout << "No" << endl;
}
