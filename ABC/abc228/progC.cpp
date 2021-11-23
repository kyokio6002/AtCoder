#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k;
  cin >> n >> k;
  vector<pair<int,int>> p(n);
  int p1,p2,p3;
  for(int i=0;i<n;i++){
    cin >> p1 >> p2 >> p3;
    p[i]=make_pair(p1+p2+p3,i);
  }

  sort(p.rbegin(),p.rend());

  int least=p[k-1].first;
  vector<int> ans(n);
  for(int i=0;i<n;i++){ 
    if(i<k)ans[p[i].second]++;
    else{
      if(p[i].first+300<least)continue;
      ans[p[i].second]++;
    }
  }

  for(int i=0;i<n;i++){
    if(ans[i])cout << "Yes" << endl;
    else cout << "No" << endl;
  }

}
