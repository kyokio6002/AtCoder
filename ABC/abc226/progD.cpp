#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  vector<pair<int,int>> p(n);
  for(int i=0;i<n;i++)cin >> p[i].first >> p[i].second;

  set<pair<int,int>> ans;
  int lenx,leny;
  int max_num;
  pair<int,int> pr;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j)continue;
      lenx=p[i].first-p[j].first;
      leny=p[i].second-p[j].second;
      max_num=gcd(lenx,leny);  // (10,0)=10,(0,0)=0
      if(lenx==0 && leny!=0)leny/=abs(leny);
      else if(lenx!=0 && leny==0)lenx/=abs(lenx);
      else if(max_num>1){
        lenx/=max_num;
        leny/=max_num;
      }
      pr={lenx,leny};
      ans.insert(pr);
    }
  }

  cout << ans.size() << endl;
}
